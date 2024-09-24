#include "sprintf_tests.h"

// c

START_TEST(sprintf_3_c_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_c[_i], str_3[0]);
  int len_our = my_sprintf(our, str_c[_i], str_3[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_3_c_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_c[_i], str_3[1]);
  int len_our = my_sprintf(our, str_c[_i], str_3[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_3_c_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_c[_i], str_3[2]);
  int len_our = my_sprintf(our, str_c[_i], str_3[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_3_c_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_c[_i], str_3[3]);
  int len_our = my_sprintf(our, str_c[_i], str_3[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_3_c_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_c[_i], str_3[4]);
  int len_our = my_sprintf(our, str_c[_i], str_3[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_3_c_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_c[_i], str_3[5]);
  int len_our = my_sprintf(our, str_c[_i], str_3[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_c(void) {
  Suite *s = suite_create("sprintf_c");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_3_c_0, 0, 28);
  tcase_add_loop_test(tc, sprintf_3_c_1, 0, 28);
  tcase_add_loop_test(tc, sprintf_3_c_2, 0, 28);
  tcase_add_loop_test(tc, sprintf_3_c_3, 0, 28);
  tcase_add_loop_test(tc, sprintf_3_c_4, 0, 28);
  tcase_add_loop_test(tc, sprintf_3_c_5, 0, 28);

  suite_add_tcase(s, tc);
  return s;
}

// d

START_TEST(sprintf_2_d_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_d[_i], str_2[0]);
  int len_our = my_sprintf(our, str_d[_i], str_2[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_d_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_d[_i], str_2[1]);
  int len_our = my_sprintf(our, str_d[_i], str_2[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_d_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_d[_i], str_2[2]);
  int len_our = my_sprintf(our, str_d[_i], str_2[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_d_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_d[_i], str_2[3]);
  int len_our = my_sprintf(our, str_d[_i], str_2[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_d_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_d[_i], str_2[4]);
  int len_our = my_sprintf(our, str_d[_i], str_2[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_d_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_d[_i], str_2[5]);
  int len_our = my_sprintf(our, str_d[_i], str_2[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_8_hd_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hd[_i], str_8[0]);
  int len_our = my_sprintf(our, str_hd[_i], str_8[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_8_hd_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hd[_i], str_8[1]);
  int len_our = my_sprintf(our, str_hd[_i], str_8[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_8_hd_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hd[_i], str_8[2]);
  int len_our = my_sprintf(our, str_hd[_i], str_8[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_9_ld_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_ld[_i], str_9[0]);
  int len_our = my_sprintf(our, str_ld[_i], str_9[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_9_ld_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_ld[_i], str_9[1]);
  int len_our = my_sprintf(our, str_ld[_i], str_9[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_9_ld_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_ld[_i], str_9[2]);
  int len_our = my_sprintf(our, str_ld[_i], str_9[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_d(void) {
  Suite *s = suite_create("sprintf_d");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_2_d_0, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_d_1, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_d_2, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_d_3, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_d_4, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_d_5, 0, 20);

  tcase_add_loop_test(tc, sprintf_8_hd_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_8_hd_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_8_hd_2, 0, 4);

  tcase_add_loop_test(tc, sprintf_9_ld_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_9_ld_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_9_ld_2, 0, 4);

  suite_add_tcase(s, tc);
  return s;
}

// i

START_TEST(sprintf_2_i_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_i[_i], str_2[0]);
  int len_our = my_sprintf(our, str_i[_i], str_2[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_i_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_i[_i], str_2[1]);
  int len_our = my_sprintf(our, str_i[_i], str_2[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_i_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_i[_i], str_2[2]);
  int len_our = my_sprintf(our, str_i[_i], str_2[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_i_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_i[_i], str_2[3]);
  int len_our = my_sprintf(our, str_i[_i], str_2[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_i_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_i[_i], str_2[4]);
  int len_our = my_sprintf(our, str_i[_i], str_2[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_i_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_i[_i], str_2[5]);
  int len_our = my_sprintf(our, str_i[_i], str_2[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_8_hi_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hi[_i], str_8[0]);
  int len_our = my_sprintf(our, str_hi[_i], str_8[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_8_hi_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hi[_i], str_8[1]);
  int len_our = my_sprintf(our, str_hi[_i], str_8[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_8_hi_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hi[_i], str_8[2]);
  int len_our = my_sprintf(our, str_hi[_i], str_8[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_9_li_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_li[_i], str_9[0]);
  int len_our = my_sprintf(our, str_li[_i], str_9[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_9_li_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_li[_i], str_9[1]);
  int len_our = my_sprintf(our, str_li[_i], str_9[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_9_li_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_li[_i], str_9[2]);
  int len_our = my_sprintf(our, str_li[_i], str_9[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_i(void) {
  Suite *s = suite_create("sprintf_i");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_2_i_0, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_i_1, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_i_2, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_i_3, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_i_4, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_i_5, 0, 20);

  tcase_add_loop_test(tc, sprintf_8_hi_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_8_hi_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_8_hi_2, 0, 4);

  tcase_add_loop_test(tc, sprintf_9_li_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_9_li_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_9_li_2, 0, 4);

  suite_add_tcase(s, tc);
  return s;
}

// e

START_TEST(sprintf_1_e_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_e[_i], str_1[0]);
  int len_our = my_sprintf(our, str_e[_i], str_1[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_e_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_e[_i], str_1[1]);
  int len_our = my_sprintf(our, str_e[_i], str_1[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_e_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_e[_i], str_1[2]);
  int len_our = my_sprintf(our, str_e[_i], str_1[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_e_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_e[_i], str_1[3]);
  int len_our = my_sprintf(our, str_e[_i], str_1[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_e_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_e[_i], str_1[4]);
  int len_our = my_sprintf(our, str_e[_i], str_1[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_e_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_e[_i], str_1[5]);
  int len_our = my_sprintf(our, str_e[_i], str_1[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_e_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_e[_i], str_1[6]);
  int len_our = my_sprintf(our, str_e[_i], str_1[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_Le_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Le[_i], str_5[0]);
  int len_our = my_sprintf(our, str_Le[_i], str_5[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_Le_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Le[_i], str_5[1]);
  int len_our = my_sprintf(our, str_Le[_i], str_5[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_Le_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Le[_i], str_5[2]);
  int len_our = my_sprintf(our, str_Le[_i], str_5[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_Le_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Le[_i], str_5[3]);
  int len_our = my_sprintf(our, str_Le[_i], str_5[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_Le_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Le[_i], str_5[4]);
  int len_our = my_sprintf(our, str_Le[_i], str_5[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_Le_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Le[_i], str_5[5]);
  int len_our = my_sprintf(our, str_Le[_i], str_5[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_Le_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Le[_i], str_5[6]);
  int len_our = my_sprintf(our, str_Le[_i], str_5[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_le_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_le[_i], str_10[0]);
  int len_our = my_sprintf(our, str_le[_i], str_10[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_le_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_le[_i], str_10[1]);
  int len_our = my_sprintf(our, str_le[_i], str_10[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_le_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_le[_i], str_10[2]);
  int len_our = my_sprintf(our, str_le[_i], str_10[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_le_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_le[_i], str_10[3]);
  int len_our = my_sprintf(our, str_le[_i], str_10[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_le_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_le[_i], str_10[4]);
  int len_our = my_sprintf(our, str_le[_i], str_10[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_le_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_le[_i], str_10[5]);
  int len_our = my_sprintf(our, str_le[_i], str_10[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_le_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_le[_i], str_10[6]);
  int len_our = my_sprintf(our, str_le[_i], str_10[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_e(void) {
  Suite *s = suite_create("sprintf_e");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_1_e_0, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_e_1, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_e_2, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_e_3, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_e_4, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_e_5, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_e_6, 0, 20);

  tcase_add_loop_test(tc, sprintf_5_Le_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_Le_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_Le_2, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_Le_3, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_Le_4, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_Le_5, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_Le_6, 0, 4);

  tcase_add_loop_test(tc, sprintf_10_le_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_le_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_le_2, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_le_3, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_le_4, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_le_5, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_le_6, 0, 4);

  suite_add_tcase(s, tc);
  return s;
}

// E

START_TEST(sprintf_1_E_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_E[_i], str_1[0]);
  int len_our = my_sprintf(our, str_E[_i], str_1[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_E_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_E[_i], str_1[1]);
  int len_our = my_sprintf(our, str_E[_i], str_1[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_E_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_E[_i], str_1[2]);
  int len_our = my_sprintf(our, str_E[_i], str_1[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_E_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_E[_i], str_1[3]);
  int len_our = my_sprintf(our, str_E[_i], str_1[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_E_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_E[_i], str_1[4]);
  int len_our = my_sprintf(our, str_E[_i], str_1[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_E_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_E[_i], str_1[5]);
  int len_our = my_sprintf(our, str_E[_i], str_1[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_1_E_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_E[_i], str_1[6]);
  int len_our = my_sprintf(our, str_E[_i], str_1[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_LE_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_LE[_i], str_5[0]);
  int len_our = my_sprintf(our, str_LE[_i], str_5[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_LE_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_LE[_i], str_5[1]);
  int len_our = my_sprintf(our, str_LE[_i], str_5[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_LE_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_LE[_i], str_5[2]);
  int len_our = my_sprintf(our, str_LE[_i], str_5[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_LE_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_LE[_i], str_5[3]);
  int len_our = my_sprintf(our, str_LE[_i], str_5[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_LE_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_LE[_i], str_5[4]);
  int len_our = my_sprintf(our, str_LE[_i], str_5[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_LE_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_LE[_i], str_5[5]);
  int len_our = my_sprintf(our, str_LE[_i], str_5[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_5_LE_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_LE[_i], str_5[6]);
  int len_our = my_sprintf(our, str_LE[_i], str_5[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_lE_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_lE[_i], str_10[0]);
  int len_our = my_sprintf(our, str_lE[_i], str_10[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_lE_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_lE[_i], str_10[1]);
  int len_our = my_sprintf(our, str_lE[_i], str_10[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_lE_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_lE[_i], str_10[2]);
  int len_our = my_sprintf(our, str_lE[_i], str_10[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_lE_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_lE[_i], str_10[3]);
  int len_our = my_sprintf(our, str_lE[_i], str_10[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_lE_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_lE[_i], str_10[4]);
  int len_our = my_sprintf(our, str_lE[_i], str_10[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_lE_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_lE[_i], str_10[5]);
  int len_our = my_sprintf(our, str_lE[_i], str_10[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_lE_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_lE[_i], str_10[6]);
  int len_our = my_sprintf(our, str_lE[_i], str_10[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_E(void) {
  Suite *s = suite_create("sprintf_E");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_1_E_0, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_E_1, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_E_2, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_E_3, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_E_4, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_E_5, 0, 20);
  tcase_add_loop_test(tc, sprintf_1_E_6, 0, 20);

  tcase_add_loop_test(tc, sprintf_5_LE_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_LE_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_LE_2, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_LE_3, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_LE_4, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_LE_5, 0, 4);
  tcase_add_loop_test(tc, sprintf_5_LE_6, 0, 4);

  tcase_add_loop_test(tc, sprintf_10_lE_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_lE_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_lE_2, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_lE_3, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_lE_4, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_lE_5, 0, 4);
  tcase_add_loop_test(tc, sprintf_10_lE_6, 0, 4);

  suite_add_tcase(s, tc);
  return s;
}

// f

START_TEST(sprintf_10_f_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_f[_i], str_10[0]);
  int len_our = my_sprintf(our, str_f[_i], str_10[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_f_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_f[_i], str_10[1]);
  int len_our = my_sprintf(our, str_f[_i], str_10[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_f_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_f[_i], str_10[2]);
  int len_our = my_sprintf(our, str_f[_i], str_10[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_f_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_f[_i], str_10[3]);
  int len_our = my_sprintf(our, str_f[_i], str_10[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_f_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_f[_i], str_10[4]);
  int len_our = my_sprintf(our, str_f[_i], str_10[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_f_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_f[_i], str_10[5]);
  int len_our = my_sprintf(our, str_f[_i], str_10[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_f_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_f[_i], str_10[6]);
  int len_our = my_sprintf(our, str_f[_i], str_10[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_f(void) {
  Suite *s = suite_create("sprintf_f");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_10_f_0, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_f_1, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_f_2, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_f_3, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_f_4, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_f_5, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_f_6, 0, 24);

  suite_add_tcase(s, tc);
  return s;
}

// g

START_TEST(sprintf_10_g_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_g[_i], str_10[0]);
  int len_our = my_sprintf(our, str_g[_i], str_10[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_g_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_g[_i], str_10[1]);
  int len_our = my_sprintf(our, str_g[_i], str_10[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_g_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_g[_i], str_10[2]);
  int len_our = my_sprintf(our, str_g[_i], str_10[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_g_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_g[_i], str_10[3]);
  int len_our = my_sprintf(our, str_g[_i], str_10[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_g_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_g[_i], str_10[4]);
  int len_our = my_sprintf(our, str_g[_i], str_10[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_g_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_g[_i], str_10[5]);
  int len_our = my_sprintf(our, str_g[_i], str_10[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_g_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_g[_i], str_10[6]);
  int len_our = my_sprintf(our, str_g[_i], str_10[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_g(void) {
  Suite *s = suite_create("sprintf_g");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_10_g_0, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_g_1, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_g_2, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_g_3, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_g_4, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_g_5, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_g_6, 0, 24);

  suite_add_tcase(s, tc);
  return s;
}

// G

START_TEST(sprintf_10_G_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_G[_i], str_10[0]);
  int len_our = my_sprintf(our, str_G[_i], str_10[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_G_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_G[_i], str_10[1]);
  int len_our = my_sprintf(our, str_G[_i], str_10[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_G_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_G[_i], str_10[2]);
  int len_our = my_sprintf(our, str_G[_i], str_10[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_G_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_G[_i], str_10[3]);
  int len_our = my_sprintf(our, str_G[_i], str_10[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_G_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_G[_i], str_10[4]);
  int len_our = my_sprintf(our, str_G[_i], str_10[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_G_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_G[_i], str_10[5]);
  int len_our = my_sprintf(our, str_G[_i], str_10[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_10_G_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_G[_i], str_10[6]);
  int len_our = my_sprintf(our, str_G[_i], str_10[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_G(void) {
  Suite *s = suite_create("sprintf_G");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_10_G_0, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_G_1, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_G_2, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_G_3, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_G_4, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_G_5, 0, 24);
  tcase_add_loop_test(tc, sprintf_10_G_6, 0, 24);

  suite_add_tcase(s, tc);
  return s;
}

// o

START_TEST(sprintf_11_Lo_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Lo[_i], str_11[0]);
  int len_our = my_sprintf(our, str_Lo[_i], str_11[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_11_Lo_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Lo[_i], str_11[1]);
  int len_our = my_sprintf(our, str_Lo[_i], str_11[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_11_Lo_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Lo[_i], str_11[2]);
  int len_our = my_sprintf(our, str_Lo[_i], str_11[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_13_o_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_o[_i], str_13[0]);
  int len_our = my_sprintf(our, str_o[_i], str_13[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_13_o_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_o[_i], str_13[1]);
  int len_our = my_sprintf(our, str_o[_i], str_13[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_13_o_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_o[_i], str_13[2]);
  int len_our = my_sprintf(our, str_o[_i], str_13[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_o(void) {
  Suite *s = suite_create("sprintf_o");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_11_Lo_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_11_Lo_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_11_Lo_2, 0, 4);

  tcase_add_loop_test(tc, sprintf_13_o_0, 0, 24);
  tcase_add_loop_test(tc, sprintf_13_o_1, 0, 24);
  tcase_add_loop_test(tc, sprintf_13_o_2, 0, 24);

  suite_add_tcase(s, tc);
  return s;
}

// s

START_TEST(sprintf_4_s_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_s[_i], str_4[0]);
  int len_our = my_sprintf(our, str_s[_i], str_4[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_s_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_s[_i], str_4[1]);
  int len_our = my_sprintf(our, str_s[_i], str_4[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_s_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_s[_i], str_4[2]);
  int len_our = my_sprintf(our, str_s[_i], str_4[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_s_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_s[_i], str_4[3]);
  int len_our = my_sprintf(our, str_s[_i], str_4[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_s_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_s[_i], str_4[4]);
  int len_our = my_sprintf(our, str_s[_i], str_4[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_s_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_s[_i], str_4[5]);
  int len_our = my_sprintf(our, str_s[_i], str_4[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_s_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_s[_i], str_4[6]);
  int len_our = my_sprintf(our, str_s[_i], str_4[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_s_7) {
  char orig[100], our[100];

  char *str[] = {"%s%-10s% .ssbfd%+ #-5.3sfdfdf", "%s%-10s%+.ssbfd%#5.3sfdfdf",
                 "%s%+010s%-.ssbfd%+ #0.3sfdfdf", "%s% 10s%.ssbfd% #5.3sfdfdf",
                 "%s%-10s%+ -0.ssbfd%#5.3sfdfdf"};

  char *data[] = {"HEllo", NULL, "yo5\npee0", "5q6w34e\0"};
  int len_orig = sprintf(orig, str[_i], data[0], data[1], data[2], data[3]);
  int len_our = my_sprintf(our, str[_i], data[0], data[1], data[2], data[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_s(void) {
  Suite *s = suite_create("sprintf_s");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_4_s_0, 0, 20);
  tcase_add_loop_test(tc, sprintf_4_s_1, 0, 20);
  tcase_add_loop_test(tc, sprintf_4_s_2, 0, 20);
  tcase_add_loop_test(tc, sprintf_4_s_3, 0, 20);
  tcase_add_loop_test(tc, sprintf_4_s_4, 0, 20);
  tcase_add_loop_test(tc, sprintf_4_s_5, 0, 20);
  tcase_add_loop_test(tc, sprintf_4_s_6, 0, 20);
  tcase_add_loop_test(tc, sprintf_4_s_7, 0, 5);

  suite_add_tcase(s, tc);
  return s;
}

// u

START_TEST(sprintf_13_u_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_u[_i], str_13[0]);
  int len_our = my_sprintf(our, str_u[_i], str_13[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_13_u_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_u[_i], str_13[1]);
  int len_our = my_sprintf(our, str_u[_i], str_13[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_13_u_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_u[_i], str_13[2]);
  int len_our = my_sprintf(our, str_u[_i], str_13[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_15_hu_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hu[_i], str_15[0]);
  int len_our = my_sprintf(our, str_hu[_i], str_15[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_15_hu_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hu[_i], str_15[1]);
  int len_our = my_sprintf(our, str_hu[_i], str_15[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_15_hu_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hu[_i], str_15[2]);
  int len_our = my_sprintf(our, str_hu[_i], str_15[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_11_Lu_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Lu[_i], str_11[0]);
  int len_our = my_sprintf(our, str_Lu[_i], str_11[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_11_Lu_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Lu[_i], str_11[1]);
  int len_our = my_sprintf(our, str_Lu[_i], str_11[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_11_Lu_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Lu[_i], str_11[2]);
  int len_our = my_sprintf(our, str_Lu[_i], str_11[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_u(void) {
  Suite *s = suite_create("sprintf_u");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_13_u_0, 0, 20);
  tcase_add_loop_test(tc, sprintf_13_u_1, 0, 20);
  tcase_add_loop_test(tc, sprintf_13_u_2, 0, 20);

  tcase_add_loop_test(tc, sprintf_15_hu_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_15_hu_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_15_hu_2, 0, 4);

  tcase_add_loop_test(tc, sprintf_11_Lu_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_11_Lu_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_11_Lu_2, 0, 4);

  suite_add_tcase(s, tc);
  return s;
}

// x

START_TEST(sprintf_2_x_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_x[_i], str_2[0]);
  int len_our = my_sprintf(our, str_x[_i], str_2[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_x_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_x[_i], str_2[3]);
  int len_our = my_sprintf(our, str_x[_i], str_2[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_x_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_x[_i], str_2[5]);
  int len_our = my_sprintf(our, str_x[_i], str_2[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_15_hx_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hx[_i], str_15[0]);
  int len_our = my_sprintf(our, str_hx[_i], str_15[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_15_hx_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hx[_i], str_15[1]);
  int len_our = my_sprintf(our, str_hx[_i], str_15[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_15_hx_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hx[_i], str_15[2]);
  int len_our = my_sprintf(our, str_hx[_i], str_15[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_16_Lx_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Lx[_i], str_16[0]);
  int len_our = my_sprintf(our, str_Lx[_i], str_16[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_16_Lx_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Lx[_i], str_16[1]);
  int len_our = my_sprintf(our, str_Lx[_i], str_16[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_16_Lx_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_Lx[_i], str_16[2]);
  int len_our = my_sprintf(our, str_Lx[_i], str_16[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_14_x_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_x[_i], str_14[0]);
  int len_our = my_sprintf(our, str_x[_i], str_14[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_14_x_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_x[_i], str_14[1]);
  int len_our = my_sprintf(our, str_x[_i], str_14[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_14_x_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_x[_i], str_14[2]);
  int len_our = my_sprintf(our, str_x[_i], str_14[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_x(void) {
  Suite *s = suite_create("sprintf_x");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_2_x_0, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_x_3, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_x_5, 0, 20);

  tcase_add_loop_test(tc, sprintf_15_hx_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_15_hx_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_15_hx_2, 0, 4);

  tcase_add_loop_test(tc, sprintf_16_Lx_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_16_Lx_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_16_Lx_2, 0, 4);

  tcase_add_loop_test(tc, sprintf_14_x_0, 0, 20);
  tcase_add_loop_test(tc, sprintf_14_x_1, 0, 20);
  tcase_add_loop_test(tc, sprintf_14_x_2, 0, 20);

  suite_add_tcase(s, tc);
  return s;
}

// X

START_TEST(sprintf_2_X_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_X[_i], str_2[0]);
  int len_our = my_sprintf(our, str_X[_i], str_2[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_X_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_X[_i], str_2[3]);
  int len_our = my_sprintf(our, str_X[_i], str_2[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_2_X_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_X[_i], str_2[5]);
  int len_our = my_sprintf(our, str_X[_i], str_2[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_15_hX_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hX[_i], str_15[0]);
  int len_our = my_sprintf(our, str_hX[_i], str_15[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_15_hX_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hX[_i], str_15[1]);
  int len_our = my_sprintf(our, str_hX[_i], str_15[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_15_hX_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_hX[_i], str_15[2]);
  int len_our = my_sprintf(our, str_hX[_i], str_15[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_16_LX_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_LX[_i], str_16[0]);
  int len_our = my_sprintf(our, str_LX[_i], str_16[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_16_LX_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_LX[_i], str_16[1]);
  int len_our = my_sprintf(our, str_LX[_i], str_16[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_16_LX_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_LX[_i], str_16[2]);
  int len_our = my_sprintf(our, str_LX[_i], str_16[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_14_X_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_X[_i], str_14[0]);
  int len_our = my_sprintf(our, str_X[_i], str_14[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_14_X_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_X[_i], str_14[1]);
  int len_our = my_sprintf(our, str_X[_i], str_14[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_14_X_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_X[_i], str_14[2]);
  int len_our = my_sprintf(our, str_X[_i], str_14[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_X(void) {
  Suite *s = suite_create("sprintf_X");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_2_X_0, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_X_3, 0, 20);
  tcase_add_loop_test(tc, sprintf_2_X_5, 0, 20);

  tcase_add_loop_test(tc, sprintf_15_hX_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_15_hX_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_15_hX_2, 0, 4);

  tcase_add_loop_test(tc, sprintf_16_LX_0, 0, 4);
  tcase_add_loop_test(tc, sprintf_16_LX_1, 0, 4);
  tcase_add_loop_test(tc, sprintf_16_LX_2, 0, 4);

  tcase_add_loop_test(tc, sprintf_14_X_0, 0, 20);
  tcase_add_loop_test(tc, sprintf_14_X_1, 0, 20);
  tcase_add_loop_test(tc, sprintf_14_X_2, 0, 20);

  suite_add_tcase(s, tc);
  return s;
}

// p

START_TEST(sprintf_6_p_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_6[0]);
  int len_our = my_sprintf(our, str_p[_i], str_6[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_6_p_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_6[1]);
  int len_our = my_sprintf(our, str_p[_i], str_6[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_6_p_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_6[2]);
  int len_our = my_sprintf(our, str_p[_i], str_6[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_6_p_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_6[3]);
  int len_our = my_sprintf(our, str_p[_i], str_6[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_6_p_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_6[4]);
  int len_our = my_sprintf(our, str_p[_i], str_6[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_6_p_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_6[5]);
  int len_our = my_sprintf(our, str_p[_i], str_6[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_6_p_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_6[6]);
  int len_our = my_sprintf(our, str_p[_i], str_6[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_p_0) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_4[0]);
  int len_our = my_sprintf(our, str_p[_i], str_4[0]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_p_1) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_4[1]);
  int len_our = my_sprintf(our, str_p[_i], str_4[1]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_p_2) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_4[2]);
  int len_our = my_sprintf(our, str_p[_i], str_4[2]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_p_3) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_4[3]);
  int len_our = my_sprintf(our, str_p[_i], str_4[3]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_p_4) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_4[4]);
  int len_our = my_sprintf(our, str_p[_i], str_4[4]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_p_5) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_4[5]);
  int len_our = my_sprintf(our, str_p[_i], str_4[5]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

START_TEST(sprintf_4_p_6) {
  char orig[100], our[100];
  int len_orig = sprintf(orig, str_p[_i], str_4[6]);
  int len_our = my_sprintf(our, str_p[_i], str_4[6]);
  ck_assert_pstr_eq(orig, our);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_p(void) {
  Suite *s = suite_create("sprintf_p");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_6_p_0, 0, 28);
  tcase_add_loop_test(tc, sprintf_6_p_1, 0, 28);
  tcase_add_loop_test(tc, sprintf_6_p_2, 0, 28);
  tcase_add_loop_test(tc, sprintf_6_p_3, 0, 28);
  tcase_add_loop_test(tc, sprintf_6_p_4, 0, 28);
  tcase_add_loop_test(tc, sprintf_6_p_5, 0, 28);
  tcase_add_loop_test(tc, sprintf_6_p_6, 0, 28);

  tcase_add_loop_test(tc, sprintf_4_p_0, 0, 28);
  tcase_add_loop_test(tc, sprintf_4_p_1, 0, 28);
  tcase_add_loop_test(tc, sprintf_4_p_2, 0, 28);
  tcase_add_loop_test(tc, sprintf_4_p_3, 0, 28);
  tcase_add_loop_test(tc, sprintf_4_p_4, 0, 28);
  tcase_add_loop_test(tc, sprintf_4_p_5, 0, 28);
  tcase_add_loop_test(tc, sprintf_4_p_6, 0, 28);

  suite_add_tcase(s, tc);
  return s;
}

// n

START_TEST(sprintf_2_n_0) {
  char orig[100] = {0}, our[100] = {0};
  int leno = 0, lenu = 0;
  int len_orig = sprintf(orig, str_n[_i], &leno);
  int len_our = my_sprintf(our, str_n[_i], &lenu);
  ck_assert_int_eq(leno, lenu);
  ck_assert_int_eq(len_orig, len_our);
}
END_TEST

Suite *test_sprintf_n(void) {
  Suite *s = suite_create("sprintf_n");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_2_n_0, 0, 4);

  suite_add_tcase(s, tc);
  return s;
}

// percent

START_TEST(sprintf_15_percent_0) {
  char orig[100], our[100];
  sprintf(orig, str_percent[_i], str_1[0]);
  my_sprintf(our, str_percent[_i], str_15[0]);
  ck_assert_pstr_eq(orig, our);
}
END_TEST

START_TEST(sprintf_15_percent_1) {
  char orig[100], our[100];
  sprintf(orig, str_percent[_i], str_15[1]);
  my_sprintf(our, str_percent[_i], str_15[1]);
  ck_assert_pstr_eq(orig, our);
}
END_TEST

START_TEST(sprintf_15_percent_2) {
  char orig[100], our[100];
  sprintf(orig, str_percent[_i], str_15[2]);
  my_sprintf(our, str_percent[_i], str_15[2]);
  ck_assert_pstr_eq(orig, our);
}
END_TEST

START_TEST(sprintf_15_percent_3) {
  char orig[100], our[100];
  sprintf(orig, str_percent[_i], str_15[3]);
  my_sprintf(our, str_percent[_i], str_15[3]);
  ck_assert_pstr_eq(orig, our);
}
END_TEST

START_TEST(sprintf_15_percent_4) {
  char orig[100], our[100];
  sprintf(orig, str_percent[_i], str_15[4]);
  my_sprintf(our, str_percent[_i], str_15[4]);
  ck_assert_pstr_eq(orig, our);
}
END_TEST

Suite *test_sprintf_percent(void) {
  Suite *s = suite_create("sprintf_percent");
  TCase *tc = tcase_create("sprintf_tc");

  tcase_add_loop_test(tc, sprintf_15_percent_0, 0, 28);
  tcase_add_loop_test(tc, sprintf_15_percent_1, 0, 28);
  tcase_add_loop_test(tc, sprintf_15_percent_2, 0, 28);
  tcase_add_loop_test(tc, sprintf_15_percent_3, 0, 28);
  tcase_add_loop_test(tc, sprintf_15_percent_4, 0, 28);

  suite_add_tcase(s, tc);
  return s;
}