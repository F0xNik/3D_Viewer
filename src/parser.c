#include "parser.h"

void delete_facets(data_t *points_data) {
  for (int i = 0; i < (int)points_data->total_facets; i++) {
    free(points_data->polygons[i].vertexes);
  }
  free(points_data->polygons);
}

void count_points(FILE *fp, data_t *points_data) {
  char *str = NULL;
  size_t len = 0, read;
  while ((int)(read = getline(&str, &len, fp)) != -1) {
    if (str[0] == 'v' && str[1] == ' ') {
      points_data->total_vertexes++;
    }
    if (str[0] == 'f') {
      points_data->total_facets++;
    }
  }
  points_data->matrix_3d.rows = points_data->total_vertexes;
  points_data->matrix_3d.columns = 3;
  free(str);
}

bool is_digit(char *str, int i) {
  bool res = false;
  if (str[i] >= '0' && str[i] <= '9') res = true;
  if (str[i] == '.' && (str[i - 1] >= '0' && str[i - 1] <= '9') &&
      (str[i + 1] >= '0' && str[i + 1] <= '9'))
    res = true;
  if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9')) res = true;
  return res;
}

void skip_y(char *str, int *y) {
  while (str[*y] == ' ' && str[*y] != '\n') *y = *y + 1;
}

void get_points_from_str(char *str, data_t *points_data, size_t i) {
  char temp[255] = {0};
  int y = 0, z = 0;
  while (str) {
    if (is_digit(str, y) == true) break;
    y++;
  }
  for (; y < (int)strlen(str); y++) {
    if (is_digit(str, y) == false) break;
    temp[z++] = str[y];
  }
  points_data->matrix_3d.matrix[i][0] = atof(temp);
  memset(temp, 0, 255);
  z = 0;
  skip_y(str, &y);
  for (; y < (int)strlen(str); y++) {
    if (is_digit(str, y) == false) break;
    temp[z++] = str[y];
  }
  points_data->matrix_3d.matrix[i][1] = atof(temp);
  memset(temp, 0, 255);
  z = 0;
  skip_y(str, &y);
  for (; y < (int)strlen(str); y++) {
    if (is_digit(str, y) == false) break;
    temp[z++] = str[y];
  }
  points_data->matrix_3d.matrix[i][2] = atof(temp);
}

void load_points_to_matrix(FILE *fp, data_t *points_data) {
  char *str = NULL;
  size_t len = 0, read, i = 0;
  while ((int)(read = getline(&str, &len, fp)) != -1) {
    if (str[0] == 'v' && str[1] == ' ') {
      get_points_from_str(str, points_data, i);
      i++;
    }
  }
  free(str);
}

void parse_file(char *path, data_t *points_data) {
  FILE *fp = NULL;
  fp = fopen(path, "r");
  points_data->total_vertexes = 0;
  points_data->total_facets = 0;
  points_data->matrix_3d.matrix = NULL;
  if (fp != NULL) {
    count_points(fp, points_data);
    create_matrix(points_data);
    points_data->polygons =
        calloc(points_data->total_facets, sizeof(polygon_t));
    rewind(fp);
    load_points_to_matrix(fp, points_data);
    rewind(fp);
    load_facets(fp, points_data);
    fclose(fp);
  }
}

void get_number_of_str_facets(char *str, data_t *points_data, int x) {
  int res = 0;
  for (int i = 0; i < (int)strlen(str); i++) {
    if (is_digit(str, i) == true) {
      res++;
      while (str[i] != ' ' && str[i] != '\n') i++;
    }
  }
  points_data->polygons[x].numbers_of_vertexes_in_facets = res;
  points_data->polygons[x].vertexes = calloc(res * 2, sizeof(int));
}

void get_facets(char *str, data_t *points_data, int x) {
  char temp[255] = {0};
  int z = 0, y = 0;
  for (int i = 0; i < (int)strlen(str); i++) {
    if (is_digit(str, i) == true) {
      while (str[i] != ' ' && str[i] != '/' && str[i] != '\n') {
        temp[z++] = str[i];
        i++;
      }
      if (str[i] == '/') {
        while (str[i] != ' ' && str[i] != '\n') {
          i++;
        }
      }
      if (y > 0) {
        points_data->polygons[x].vertexes[y++] = atof(temp) - 1;
        points_data->polygons[x].vertexes[y++] = atof(temp) - 1;
        memset(temp, 0, 255);
        z = 0;
      } else {
        points_data->polygons[x].vertexes[y++] = atof(temp) - 1;
        memset(temp, 0, 255);
        z = 0;
      }
    }
  }
  points_data->polygons[x].vertexes[y] = points_data->polygons[x].vertexes[0];
}

void load_facets(FILE *fp, data_t *points_data) {
  char *str = NULL;
  size_t len = 0, read, x = 0;
  while ((int)(read = getline(&str, &len, fp)) != -1) {
    if (str[0] == 'f') {
      get_number_of_str_facets(str, points_data, x);
      get_facets(str, points_data, x);
      x++;
    }
  }
  free(str);
}

void create_matrix(data_t *points_data) {
  int rows = points_data->matrix_3d.rows;
  int columns = points_data->matrix_3d.columns;
  points_data->matrix_3d.matrix = calloc(rows + 1, sizeof(double *));
  for (int i = 0; i < rows; i++) {
    points_data->matrix_3d.matrix[i] = calloc(columns + 1, sizeof(double));
  }
}

void delete_matrix(data_t *points_data) {
  for (int i = 0; i < points_data->matrix_3d.rows; i++) {
    free(points_data->matrix_3d.matrix[i]);
  }
  free(points_data->matrix_3d.matrix);
  points_data->matrix_3d.matrix = NULL;
  points_data->matrix_3d.rows = 0;
  points_data->matrix_3d.columns = 0;
}
