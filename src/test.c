#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#include "parser.h"

double test1[8][3] = {{1, -1, -1}, {1, -1, 1}, {-1, -1, 1}, {-1, -1, -1},
                      {1, 1, -1},  {1, 1, 1},  {-1, 1, 1},  {-1, 1, -1}};

double test2[8][3] = {{0, 0, 0}, {0, 0, 2}, {0, 2, 0}, {0, 2, 2},
                      {2, 0, 0}, {2, 0, 2}, {2, 2, 0}, {2, 2, 2}};

double test3[5][3] = {
    {0, 1, 0}, {-1, 0, -1}, {1, 0, -1}, {1, 0, 1}, {-1, 0, 1},
};

double test4[6][3] = {{1, 0, 0}, {0, -1, 0}, {-1, 0, 0},
                      {0, 1, 0}, {0, 0, 1},  {0, 0, -1}};

START_TEST(parser_vertexes1) {
  data_t point_data;

  parse_file("obj_files/_cube.obj", &point_data);
  for (int i = 0; i < 8; i++) {
    for (int z = 0; z < 3; z++) {
      ck_assert_double_eq(point_data.matrix_3d.matrix[i][z], test1[i][z]);
    }
  }
  delete_facets(&point_data);
  delete_matrix(&point_data);
}
END_TEST

START_TEST(parser_vertexes2) {
  data_t point_data;

  parse_file("obj_files/_cube 2.obj", &point_data);
  for (int i = 0; i < 8; i++) {
    for (int z = 0; z < 3; z++) {
      ck_assert_double_eq(point_data.matrix_3d.matrix[i][z], test2[i][z]);
    }
  }
  delete_facets(&point_data);
  delete_matrix(&point_data);
}
END_TEST

START_TEST(parser_vertexes3) {
  data_t point_data;

  parse_file("obj_files/_pyramid.obj", &point_data);
  for (int i = 0; i < 5; i++) {
    for (int z = 0; z < 3; z++) {
      ck_assert_double_eq(point_data.matrix_3d.matrix[i][z], test3[i][z]);
    }
  }
  delete_facets(&point_data);
  delete_matrix(&point_data);
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, parser_vertexes1);
  tcase_add_test(tc1_1, parser_vertexes2);
  tcase_add_test(tc1_1, parser_vertexes3);

  srunner_run_all(sr, CK_ENV);
  srunner_ntests_failed(sr);
  srunner_free(sr);

  return (0);
}
