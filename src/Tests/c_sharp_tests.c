#include "main.h"

START_TEST(my_to_upper_test) {
  char string01[1024] = "Tok/toK1/tOk2/tok3/tok4";
  char string02[1024] = "TOK/TOK1/TOK2/TOK3/TOK4";
  char string03[1024] = "hell\0oworld";
  char string04[1024] = "HELL\0OWORLD";
  char string05[1024] = "hello world";
  char string06[1024] = "HELLO WORLD";
  char string07[1024] = "hello\nworld";
  char string08[1024] = "HELLO\nWORLD";
  char string09[1024] = "helloworld";
  char string10[1024] = "HELLOWORLD";
  char *pstr = my_to_upper(string01);
  ck_assert_str_eq(string02, pstr);
  free(pstr);
  pstr = my_to_upper(string03);
  ck_assert_str_eq(string04, pstr);
  free(pstr);
  pstr = my_to_upper(string05);
  ck_assert_str_eq(string06, pstr);
  free(pstr);
  pstr = my_to_upper(string07);
  ck_assert_str_eq(string08, pstr);
  free(pstr);
  pstr = my_to_upper(string09);
  ck_assert_str_eq(string10, pstr);
  free(pstr);
}
END_TEST

START_TEST(my_to_lower_test) {
  char string01[1024] = "tok/tok1/tok2/tok3/tok4";
  char string02[1024] = "ToK/tOK1/TOk2/TOK3/TOK4";
  char string03[1024] = "hell\0oworld";
  char string04[1024] = "HELL\0OWORLD";
  char string05[1024] = "hello world";
  char string06[1024] = "HELLO WORLD";
  char string07[1024] = "hello\nworld";
  char string08[1024] = "HELLO\nWORLD";
  char string09[1024] = "helloworld";
  char string10[1024] = "HELLOWORLD";
  char *pstr = my_to_lower(string02);
  ck_assert_str_eq(string01, pstr);
  free(pstr);
  pstr = my_to_lower(string04);
  ck_assert_str_eq(string03, pstr);
  free(pstr);
  pstr = my_to_lower(string06);
  ck_assert_str_eq(string05, pstr);
  free(pstr);
  pstr = my_to_lower(string08);
  ck_assert_str_eq(string07, pstr);
  free(pstr);
  pstr = my_to_lower(string10);
  ck_assert_str_eq(string09, pstr);
  free(pstr);
}
END_TEST

START_TEST(my_insert_test) {
  char insert_str1[][256] = {"qwerty", "qwerty", "210000001", ""};
  char insert_str2[][256] = {"DXD", "DXD", "999", "no_str"};
  int insert_index[10] = {0, 6, 5, 0};

  char insert_out[][256] = {"DXDqwerty", "qwertyDXD", "210009990001", "no_str"};
  char *out1 =
      (char *)my_insert(insert_str1[_i], insert_str2[_i], insert_index[_i]);
  ck_assert_pstr_eq(out1, insert_out[_i]);
  free(out1);
}
END_TEST

START_TEST(my_insert_test_NULL) {
  char insert_str1[][256] = {"qwerty", "qwerty"};
  char insert_str2[][256] = {"DXD", "DXD"};
  int insert_index[10] = {-1, 7};

  char *out1 = MY_NULL;
  out1 = (char *)my_insert(insert_str1[_i], insert_str2[_i], insert_index[_i]);
  ck_assert_ptr_null(out1);
  free(out1);

  out1 = (char *)my_insert(NULL, "qwerty", 0);
  ck_assert_ptr_null(out1);
  free(out1);
  out1 = (char *)my_insert("qwerty", NULL, 0);
  ck_assert_ptr_null(out1);
  free(out1);
}
END_TEST

START_TEST(my_trim_test) {
  char trim_str1[][256] = {
      "** \\this ** stroka **", "qwerty", "  210000001", "", "qw",
      "abc000000def",           "ABOB\nA"};
  char trim_str2[][256] = {"* \\", "* \\", "9 9", "no_str", "qw", "abef", "\n"};

  char insert_out[][256] = {"this ** stroka", "qwerty", "210000001", "", "",
                            "c000000d",       "ABOB\nA"};
  char *out1 = (char *)my_trim(trim_str1[_i], trim_str2[_i]);
  ck_assert_pstr_eq(out1, insert_out[_i]);

  free(out1);

  out1 = (char *)my_trim("qwerty", NULL);
  ck_assert_pstr_eq(out1, "qwerty");

  free(out1);
}
END_TEST

START_TEST(my_trim_test_NULL) {
  char *out1 = (char *)my_trim(NULL, "g");
  ck_assert_ptr_null(out1);
  free(out1);
}
END_TEST

START_TEST(my_trim_ANNA) {
  char *trimmed_str;
  char *str_to_trim = " \n   Hello, world!  !\n";
  trimmed_str = my_trim(str_to_trim, " H!\nd");
  if (trimmed_str) {
    ck_assert_str_eq(trimmed_str, "ello, worl");
    free(trimmed_str);
  }

  char *empty_str = "";
  trimmed_str = my_trim(empty_str, MY_NULL);
  if (trimmed_str) {
    ck_assert_str_eq(trimmed_str, "");
    free(trimmed_str);
  }

  trimmed_str = my_trim(empty_str, " \n\0");
  if (trimmed_str) {
    ck_assert_str_eq(trimmed_str, "");
    free(trimmed_str);
  }

  char *empty_format = "";
  trimmed_str = my_trim(MY_NULL, empty_format);
  ck_assert(trimmed_str == MY_NULL);

  char *str_to_trim2 = "xxx Hello, world! xxx --";
  char *format_str = "x -";
  trimmed_str = my_trim(str_to_trim2, format_str);
  if (trimmed_str) {
    ck_assert_str_eq(trimmed_str, "Hello, world!");
    free(trimmed_str);
  }
}
END_TEST

Suite *test_c_sharp(void) {
  Suite *s = suite_create("bonus_c_sharp");
  TCase *tc = tcase_create("bonus_tc");

  tcase_add_test(tc, my_to_upper_test);
  tcase_add_test(tc, my_to_lower_test);
  tcase_add_loop_test(tc, my_insert_test, 0, 4);
  tcase_add_loop_test(tc, my_insert_test_NULL, 0, 2);
  tcase_add_loop_test(tc, my_trim_test, 0, 7);
  tcase_add_test(tc, my_trim_test_NULL);
  tcase_add_test(tc, my_trim_ANNA);

  suite_add_tcase(s, tc);
  return s;
}
