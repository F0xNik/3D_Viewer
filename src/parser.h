#ifndef PARSER_H
#define PARSER_H
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct facets {
  int *vertexes;
  int numbers_of_vertexes_in_facets;
} polygon_t;

typedef struct Matrix {
  double **matrix;
  int rows;
  int columns;
} matrix_t;

typedef struct data {
  unsigned int total_vertexes;
  unsigned int total_facets;
  matrix_t matrix_3d;
  polygon_t *polygons;
} data_t;

void parse_file(char *path, data_t *points_data);
void create_matrix(data_t *points_data);
void delete_matrix(data_t *points_data);
void count_points(FILE *fp, data_t *points_data);
void load_points_to_matrix(FILE *fp, data_t *points_data);
void get_points_from_str(char *str, data_t *points_data, size_t i);
bool is_digit(char *str, int i);
void skip_y(char *str, int *y);
void load_facets(FILE *fp, data_t *points_data);
void get_facets(char *str, data_t *points_data, int x);
void get_number_of_str_facets(char *str, data_t *points_data, int x);
void delete_facets(data_t *points_data);

#endif  // PARSER_H
