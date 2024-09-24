#include "main.h"

#define STR 20

START_TEST(my_memchr_test1) {
  char string[STR] = "hellowo\"r\''ld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string, i, 10), my_memchr(string, i, 10));
    ck_assert_ptr_eq(memchr(string, i, 15), my_memchr(string, i, 15));
    ck_assert_ptr_eq(memchr(string, i, 3), my_memchr(string, i, 3));
    ck_assert_ptr_eq(memchr(string, i, 0), my_memchr(string, i, 0));
  }
  char string1[STR] = "hell\0oworld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string1, i, 10), my_memchr(string1, i, 10));
    ck_assert_ptr_eq(memchr(string1, i, 15), my_memchr(string1, i, 15));
    ck_assert_ptr_eq(memchr(string1, i, 3), my_memchr(string1, i, 3));
    ck_assert_ptr_eq(memchr(string1, i, 0), my_memchr(string1, i, 0));
  }
  char string2[STR] = "hell\nowo\trld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string2, i, 10), my_memchr(string2, i, 10));
    ck_assert_ptr_eq(memchr(string2, i, 15), my_memchr(string2, i, 15));
    ck_assert_ptr_eq(memchr(string2, i, 3), my_memchr(string2, i, 3));
    ck_assert_ptr_eq(memchr(string2, i, 0), my_memchr(string2, i, 0));
  }
  char string3[STR] = "hell*\t oworld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string3, i, 10), my_memchr(string3, i, 10));
    ck_assert_ptr_eq(memchr(string3, i, 15), my_memchr(string3, i, 15));
    ck_assert_ptr_eq(memchr(string3, i, 3), my_memchr(string3, i, 3));
    ck_assert_ptr_eq(memchr(string3, i, 0), my_memchr(string3, i, 0));
  }
  char string4[STR] = "";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string4, i, 10), my_memchr(string4, i, 10));
    ck_assert_ptr_eq(memchr(string4, i, 15), my_memchr(string4, i, 15));
    ck_assert_ptr_eq(memchr(string4, i, 3), my_memchr(string4, i, 3));
    ck_assert_ptr_eq(memchr(string4, i, 0), my_memchr(string4, i, 0));
  }
  char string5[STR] = "\0";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string5, i, 10), my_memchr(string5, i, 10));
    ck_assert_ptr_eq(memchr(string5, i, 15), my_memchr(string5, i, 15));
    ck_assert_ptr_eq(memchr(string5, i, 3), my_memchr(string5, i, 3));
    ck_assert_ptr_eq(memchr(string5, i, 0), my_memchr(string5, i, 0));
  }
}
END_TEST

START_TEST(my_memchr_test2) {
  char string[STR] = "hellowo\"r\''ld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string, i, 10), my_memchr(string, i, 10));
    ck_assert_ptr_eq(memchr(string, i, 15), my_memchr(string, i, 15));
    ck_assert_ptr_eq(memchr(string, i, 3), my_memchr(string, i, 3));
    ck_assert_ptr_eq(memchr(string, i, 0), my_memchr(string, i, 0));
  }
  char string1[STR] = "hell\0oworld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string1, i, 10), my_memchr(string1, i, 10));
    ck_assert_ptr_eq(memchr(string1, i, 15), my_memchr(string1, i, 15));
    ck_assert_ptr_eq(memchr(string1, i, 3), my_memchr(string1, i, 3));
    ck_assert_ptr_eq(memchr(string1, i, 0), my_memchr(string1, i, 0));
  }
  char string2[STR] = "hell\nowo\trld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string2, i, 10), my_memchr(string2, i, 10));
    ck_assert_ptr_eq(memchr(string2, i, 15), my_memchr(string2, i, 15));
    ck_assert_ptr_eq(memchr(string2, i, 3), my_memchr(string2, i, 3));
    ck_assert_ptr_eq(memchr(string2, i, 0), my_memchr(string2, i, 0));
  }
  char string3[STR] = "hell*\t oworld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string3, i, 10), my_memchr(string3, i, 10));
    ck_assert_ptr_eq(memchr(string3, i, 15), my_memchr(string3, i, 15));
    ck_assert_ptr_eq(memchr(string3, i, 3), my_memchr(string3, i, 3));
    ck_assert_ptr_eq(memchr(string3, i, 0), my_memchr(string3, i, 0));
  }
  char string4[STR] = "";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string4, i, 10), my_memchr(string4, i, 10));
    ck_assert_ptr_eq(memchr(string4, i, 15), my_memchr(string4, i, 15));
    ck_assert_ptr_eq(memchr(string4, i, 3), my_memchr(string4, i, 3));
    ck_assert_ptr_eq(memchr(string4, i, 0), my_memchr(string4, i, 0));
  }
  char string5[STR] = "\0";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string5, i, 10), my_memchr(string5, i, 10));
    ck_assert_ptr_eq(memchr(string5, i, 15), my_memchr(string5, i, 15));
    ck_assert_ptr_eq(memchr(string5, i, 3), my_memchr(string5, i, 3));
    ck_assert_ptr_eq(memchr(string5, i, 0), my_memchr(string5, i, 0));
  }
}
END_TEST

START_TEST(my_memchr_test3) {
  char string[STR] = "hellowo\"r\''ld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string, i, sizeof(int)),
                     my_memchr(string, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string, i, sizeof(int)),
                     my_memchr(string, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string, i, sizeof(int)),
                     my_memchr(string, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string, i, sizeof(int)),
                     my_memchr(string, i, sizeof(int)));
  }
  char string1[STR] = "hell\0oworld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string1, i, sizeof(int)),
                     my_memchr(string1, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string1, i, sizeof(int)),
                     my_memchr(string1, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string1, i, sizeof(int)),
                     my_memchr(string1, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string1, i, sizeof(int)),
                     my_memchr(string1, i, sizeof(int)));
  }
  char string2[STR] = "hell\nowo\trld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string2, i, sizeof(int)),
                     my_memchr(string2, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string2, i, sizeof(int)),
                     my_memchr(string2, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string2, i, sizeof(int)),
                     my_memchr(string2, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string2, i, sizeof(int)),
                     my_memchr(string2, i, sizeof(int)));
  }
  char string3[STR] = "hell*\t oworld";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string3, i, sizeof(int)),
                     my_memchr(string3, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string3, i, sizeof(int)),
                     my_memchr(string3, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string3, i, sizeof(int)),
                     my_memchr(string3, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string3, i, sizeof(int)),
                     my_memchr(string3, i, sizeof(int)));
  }
  char string4[STR] = "";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string4, i, sizeof(int)),
                     my_memchr(string4, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string4, i, sizeof(int)),
                     my_memchr(string4, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string4, i, sizeof(int)),
                     my_memchr(string4, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string4, i, sizeof(int)),
                     my_memchr(string4, i, sizeof(int)));
  }
  char string5[STR] = "\0";
  for (int i = -30; i <= 300; i++) {
    ck_assert_ptr_eq(memchr(string5, i, sizeof(int)),
                     my_memchr(string5, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string5, i, sizeof(int)),
                     my_memchr(string5, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string5, i, sizeof(int)),
                     my_memchr(string5, i, sizeof(int)));
    ck_assert_ptr_eq(memchr(string5, i, sizeof(int)),
                     my_memchr(string5, i, sizeof(int)));
  }
}
END_TEST

START_TEST(my_memcmp_test1) {
  char string[STR] = "helloworld";
  char string1[STR] = "helloworld";
  char string2[STR] = "hell\0oworld";
  char string3[STR] = "hell\0oworld";
  char string4[STR] = "hell\noworld";
  char string5[STR] = "h1ell\noworld";
  char string6[STR] = "";
  char string7[STR] = "";
  char string8[STR] = "\0";

  ck_assert_int_eq(memcmp(string, string1, 11), my_memcmp(string, string1, 11));
  ck_assert_int_eq(memcmp(string, string1, 5), my_memcmp(string, string1, 5));
  ck_assert_int_eq(memcmp(string, string1, 16), my_memcmp(string, string1, 16));
  ck_assert_int_eq(memcmp(string, string1, 0), my_memcmp(string, string1, 0));

  ck_assert_int_eq(memcmp(string, string2, 11), my_memcmp(string, string2, 11));
  ck_assert_int_eq(memcmp(string, string2, 5), my_memcmp(string, string2, 5));
  ck_assert_int_eq(memcmp(string, string2, 16), my_memcmp(string, string2, 16));
  ck_assert_int_eq(memcmp(string, string2, 0), my_memcmp(string, string2, 0));

  ck_assert_int_eq(memcmp(string2, string3, 11),
                   my_memcmp(string2, string3, 11));
  ck_assert_int_eq(memcmp(string2, string3, 5), my_memcmp(string2, string3, 5));
  ck_assert_int_eq(memcmp(string2, string3, 16),
                   my_memcmp(string2, string3, 16));
  ck_assert_int_eq(memcmp(string2, string3, 0), my_memcmp(string2, string3, 0));

  ck_assert_int_eq(memcmp(string, string4, 11), my_memcmp(string, string4, 11));
  ck_assert_int_eq(memcmp(string, string4, 5), my_memcmp(string, string4, 5));
  ck_assert_int_eq(memcmp(string, string4, 16), my_memcmp(string, string4, 16));
  ck_assert_int_eq(memcmp(string, string4, 0), my_memcmp(string, string4, 0));

  ck_assert_int_eq(memcmp(string, string5, 11), my_memcmp(string, string5, 11));
  ck_assert_int_eq(memcmp(string, string5, 5), my_memcmp(string, string5, 5));
  ck_assert_int_eq(memcmp(string, string5, 16), my_memcmp(string, string5, 16));
  ck_assert_int_eq(memcmp(string, string5, 0), my_memcmp(string, string5, 0));

  ck_assert_int_eq(memcmp(string6, string7, 11),
                   my_memcmp(string6, string7, 11));
  ck_assert_int_eq(memcmp(string6, string7, 5), my_memcmp(string6, string7, 5));
  ck_assert_int_eq(memcmp(string6, string7, 16),
                   my_memcmp(string6, string7, 16));
  ck_assert_int_eq(memcmp(string6, string7, 0), my_memcmp(string6, string7, 0));

  ck_assert_int_eq(memcmp(string6, string8, 11),
                   my_memcmp(string6, string8, 11));
  ck_assert_int_eq(memcmp(string6, string8, 5), my_memcmp(string6, string8, 5));
  ck_assert_int_eq(memcmp(string6, string8, 16),
                   my_memcmp(string6, string8, 16));
  ck_assert_int_eq(memcmp(string6, string8, 0), my_memcmp(string6, string8, 0));
}
END_TEST

START_TEST(my_memcmp_test2) {
  char string[] = "helloworld";
  char string1[] = "helloworld";
  char string2[] = "hell\0oworld";
  char string3[] = "hell\0oworld";
  char string4[] = "hell\noworld";
  char string5[] = "h1ell\noworld";
  char string6[] = "";
  char string7[] = "";
  char string8[] = "\0";

  ck_assert_int_eq(memcmp(string, string1, 11), my_memcmp(string, string1, 11));
  ck_assert_int_eq(memcmp(string, string1, 5), my_memcmp(string, string1, 5));
  ck_assert_int_eq(memcmp(string, string1, 16), my_memcmp(string, string1, 16));
  ck_assert_int_eq(memcmp(string, string1, 0), my_memcmp(string, string1, 0));

  ck_assert_int_eq(memcmp(string, string2, 11), my_memcmp(string, string2, 11));
  ck_assert_int_eq(memcmp(string, string2, 5), my_memcmp(string, string2, 5));
  ck_assert_int_eq(memcmp(string, string2, 16), my_memcmp(string, string2, 16));
  ck_assert_int_eq(memcmp(string, string2, 0), my_memcmp(string, string2, 0));

  ck_assert_int_eq(memcmp(string2, string3, 11),
                   my_memcmp(string2, string3, 11));
  ck_assert_int_eq(memcmp(string2, string3, 5), my_memcmp(string2, string3, 5));
  ck_assert_int_eq(memcmp(string2, string3, 16),
                   my_memcmp(string2, string3, 16));
  ck_assert_int_eq(memcmp(string2, string3, 0), my_memcmp(string2, string3, 0));

  ck_assert_int_eq(memcmp(string, string4, 11), my_memcmp(string, string4, 11));
  ck_assert_int_eq(memcmp(string, string4, 5), my_memcmp(string, string4, 5));
  ck_assert_int_eq(memcmp(string, string4, 16), my_memcmp(string, string4, 16));
  ck_assert_int_eq(memcmp(string, string4, 0), my_memcmp(string, string4, 0));

  ck_assert_int_eq(memcmp(string, string5, 11), my_memcmp(string, string5, 11));
  ck_assert_int_eq(memcmp(string, string5, 5), my_memcmp(string, string5, 5));
  ck_assert_int_eq(memcmp(string, string5, 16), my_memcmp(string, string5, 16));
  ck_assert_int_eq(memcmp(string, string5, 0), my_memcmp(string, string5, 0));

  ck_assert_int_eq(memcmp(string6, string7, 11),
                   my_memcmp(string6, string7, 11));
  ck_assert_int_eq(memcmp(string6, string7, 5), my_memcmp(string6, string7, 5));
  ck_assert_int_eq(memcmp(string6, string7, 16),
                   my_memcmp(string6, string7, 16));
  ck_assert_int_eq(memcmp(string6, string7, 0), my_memcmp(string6, string7, 0));

  ck_assert_int_eq(memcmp(string6, string8, 11),
                   my_memcmp(string6, string8, 11));
  ck_assert_int_eq(memcmp(string6, string8, 5), my_memcmp(string6, string8, 5));
  ck_assert_int_eq(memcmp(string6, string8, 16),
                   my_memcmp(string6, string8, 16));
  ck_assert_int_eq(memcmp(string6, string8, 0), my_memcmp(string6, string8, 0));
}
END_TEST

START_TEST(my_memcpy_test1) {
  char string[STR] = "helloworld";
  char string1[STR] = "hell\0oworld";
  char string2[STR] = "hell\noworld";
  char string3[STR] = "h1ell oworld";

  char string4[STR] = {0};
  char string5[STR] = {0};

  my_memcpy(string4, string, 15);
  memcpy(string5, string, 15);
  ck_assert_str_eq(string4, string5);

  my_memcpy(string4, string1, 15);
  memcpy(string5, string1, 15);
  ck_assert_str_eq(string4, string5);

  my_memcpy(string4, string2, 15);
  memcpy(string5, string2, 15);
  ck_assert_str_eq(string4, string5);

  my_memcpy(string4, string3, 15);
  memcpy(string5, string3, 15);
  ck_assert_str_eq(string4, string5);

  my_memcpy(string1, string2, 15);
  memcpy(string1, string, 15);
  ck_assert_str_eq(string4, string5);
}
END_TEST

START_TEST(my_memcpy_test2) {
  char string[STR] = "helloworld";
  char string1[STR] = "hell\0oworld";
  char string2[STR] = "hell\noworld";
  char string3[STR] = "h1ell oworld";

  char string4[STR] = "helloworld";
  char string5[STR] = "hell\0oworld";
  char string6[STR] = "hell\noworld";
  char string7[STR] = "h1ell oworld";

  my_memcpy(string, string1, 15);
  memcpy(string4, string5, 15);
  ck_assert_str_eq(string, string4);

  my_memcpy(string2, string3, 15);
  memcpy(string6, string7, 15);
  ck_assert_str_eq(string2, string6);
}
END_TEST

START_TEST(my_memmove1_test) {
  /*Стандартная проверка*/
  char string[STR] = "helloworld123";
  char string1[STR] = "hell\0oworld";
  char string2[STR] = "hell\noworld";
  char string3[STR] = "h1ell oworld";

  char string4[STR] = {0};
  char string5[STR] = {0};

  my_memmove(string4, string, 15);
  memmove(string5, string, 15);
  ck_assert_str_eq(string4, string5);

  my_memmove(string4, string1, 15);
  memmove(string5, string1, 15);
  ck_assert_str_eq(string4, string5);

  my_memmove(string4, string2, 15);
  memmove(string5, string2, 15);
  ck_assert_str_eq(string4, string5);

  my_memmove(string4, string3, 15);
  memmove(string5, string3, 15);
  ck_assert_str_eq(string4, string5);
}
END_TEST

START_TEST(my_memmove2_test) {
  /*Проверка с изменением указателя*/
  char string[STR] = "helloworld123";
  char string1[STR] = "hell\0oworld";
  char string2[STR] = "hell\noworld";
  char string3[STR] = "h1ell oworld";

  char string4[STR] = {0};
  char string5[STR] = {0};

  my_memmove(string4 + 3, string, 15);
  memmove(string5 + 3, string, 15);
  ck_assert_str_eq(string4, string5);

  my_memmove(string4 + 3, string1, 15);
  memmove(string5 + 3, string1, 15);
  ck_assert_str_eq(string4, string5);

  my_memmove(string4 + 3, string2, 15);
  memmove(string5 + 3, string2, 15);
  ck_assert_str_eq(string4, string5);
}
END_TEST

START_TEST(my_memmove3_test) {
  /*Проверка на перезапись в одну и ту же строку*/
  char string[STR] = "helloworld123";
  char string1[STR] = "helloworld123";
  char string2[STR] = "hell\0oworld";
  char string3[STR] = "hell\0oworld";
  char string4[STR] = "hell\noworld";
  char string5[STR] = "hell\noworld";
  char string6[STR] = "h1ell oworld";
  char string7[STR] = "h1ell oworld";
  char *string8 = NULL;

  my_memmove(string + 3, string, 15);
  memmove(string1 + 3, string1, 15);
  ck_assert_str_eq(string, string1);

  my_memmove(string - 3, string, 15);
  memmove(string1 - 3, string1, 15);
  ck_assert_str_eq(string, string1);

  my_memmove(string2 + 3, string2, 15);
  memmove(string3 + 3, string3, 15);
  ck_assert_str_eq(string2, string3);

  my_memmove(string2 - 3, string2, 15);
  memmove(string3 - 3, string3, 15);
  ck_assert_str_eq(string2, string3);

  my_memmove(string4 + 3, string4, 15);
  memmove(string5 + 3, string5, 15);
  ck_assert_str_eq(string4, string5);

  my_memmove(string4 - 3, string4, 15);
  memmove(string5 - 3, string5, 15);
  ck_assert_str_eq(string4, string5);

  my_memmove(string6 + 3, string6, 15);
  memmove(string7 + 3, string7, 15);
  ck_assert_str_eq(string6, string7);

  my_memmove(string6 - 3, string6, 15);
  memmove(string7 - 3, string7, 15);
  ck_assert_str_eq(string6, string7);
}
END_TEST

START_TEST(my_memmove4_test) {
  /*Проверка на перезапись в одну и ту же строку*/
  char string[] = "helloworld123";
  char string2[] = "hell\0oworld";
  char string4[] = "hell\noworld";
  char string8[STR] = {0};
  char string9[STR] = {0};

  my_memmove(string8, string, 13);
  memmove(string9, string, 13);
  ck_assert_pstr_eq(string8, string9);

  my_memmove(string8, string2, 0);
  memmove(string9, string2, 0);
  ck_assert_str_eq(string8, string9);

  my_memmove(string8, string4, 3);
  memmove(string9, string4, 3);
  ck_assert_str_eq(string8, string9);
}
END_TEST

START_TEST(my_memset_test) {
  for (int i = 0; i <= 127; i++) {
    char string[STR] = "helloworld123";
    char string1[STR] = "helloworld123";
    char string2[STR] = "hell\0oworld";
    char string3[STR] = "hell\0oworld";
    char string4[STR] = "hell\noworld";
    char string5[STR] = "hell\noworld";
    char string6[STR] = "h1ell oworld";
    char string7[STR] = "h1ell oworld";
    ck_assert_str_eq(memset(string, i, 15), my_memset(string1, i, 15));
    ck_assert_str_eq(memset(string2, i, 15), my_memset(string3, i, 15));
    ck_assert_str_eq(memset(string4, i, 15), my_memset(string5, i, 15));
    ck_assert_str_eq(memset(string6, i, 15), my_memset(string7, i, 15));
  }
}
END_TEST

START_TEST(my_strcat_test) {
  char string[100] = "helloworld";
  char string1[100] = "hell\0oworld";
  char string2[100] = "hello world";
  char string3[100] = "hello\nworld";
  char string4[100] = "helloworld";

  ck_assert_str_eq(strcat(string1, string), my_strcat(string1, string));
  ck_assert_str_eq(strcat(string2, string), my_strcat(string2, string));
  ck_assert_str_eq(strcat(string3, string), my_strcat(string3, string));
}
END_TEST

START_TEST(my_strncat_test) {
  /*Не рассмотренны краевые случаи*/

  char string[1024] = "helloworld";
  char string1[1024] = "hell\0oworld";
  char string2[1024] = "hello world";
  char string3[1024] = "hello\nworld";
  char string4[1024] = "helloworld";

  ck_assert_str_eq(strncat(string1, string, 15),
                   my_strncat(string1, string, 15));
  ck_assert_str_eq(strncat(string2, string, 15),
                   my_strncat(string2, string, 15));
  ck_assert_str_eq(strncat(string3, string, 15),
                   my_strncat(string3, string, 15));

  ck_assert_str_eq(strncat(string, string1, 15),
                   my_strncat(string, string1, 15));
  ck_assert_str_eq(strncat(string, string2, 15),
                   my_strncat(string, string2, 15));
  ck_assert_str_eq(strncat(string, string3, 15),
                   my_strncat(string, string3, 15));

  ck_assert_str_eq(strncat(string1, string, 40),
                   my_strncat(string1, string, 40));
  ck_assert_str_eq(strncat(string2, string, 40),
                   my_strncat(string2, string, 40));
  ck_assert_str_eq(strncat(string3, string, 40),
                   my_strncat(string3, string, 40));

  ck_assert_str_eq(strncat(string, string1, 40),
                   my_strncat(string, string1, 40));
  ck_assert_str_eq(strncat(string, string2, 40),
                   my_strncat(string, string2, 40));
  ck_assert_str_eq(strncat(string, string3, 40),
                   my_strncat(string, string3, 40));
}
END_TEST

START_TEST(my_strpbrk_test) {
  char string[STR] = "helloworld";
  char string1[STR] = "hell\0oworld";
  char string2[STR] = "hello world";
  char string3[STR] = "hello\nworld";
  char string4[STR] = "helloworld";
  char *c = "j";
  char *c1 = "l";
  char *c2 = "\0";
  char *c3 = "\n";
  char *c4 = " ";

  ck_assert_ptr_eq(strpbrk(string, c), my_strpbrk(string, c));
  ck_assert_ptr_eq(strpbrk(string1, c), my_strpbrk(string1, c));
  ck_assert_ptr_eq(strpbrk(string2, c), my_strpbrk(string2, c));
  ck_assert_ptr_eq(strpbrk(string3, c), my_strpbrk(string3, c));
  ck_assert_ptr_eq(strpbrk(string4, c), my_strpbrk(string4, c));

  ck_assert_ptr_eq(strpbrk(string, c1), my_strpbrk(string, c1));
  ck_assert_ptr_eq(strpbrk(string1, c1), my_strpbrk(string1, c1));
  ck_assert_ptr_eq(strpbrk(string2, c1), my_strpbrk(string2, c1));
  ck_assert_ptr_eq(strpbrk(string3, c1), my_strpbrk(string3, c1));
  ck_assert_ptr_eq(strpbrk(string4, c1), my_strpbrk(string4, c1));

  ck_assert_ptr_eq(strpbrk(string, c2), my_strpbrk(string, c2));
  ck_assert_ptr_eq(strpbrk(string1, c2), my_strpbrk(string1, c2));
  ck_assert_ptr_eq(strpbrk(string2, c2), my_strpbrk(string2, c2));
  ck_assert_ptr_eq(strpbrk(string3, c2), my_strpbrk(string3, c2));
  ck_assert_ptr_eq(strpbrk(string4, c2), my_strpbrk(string4, c2));

  ck_assert_ptr_eq(strpbrk(string, c3), my_strpbrk(string, c3));
  ck_assert_ptr_eq(strpbrk(string1, c3), my_strpbrk(string1, c3));
  ck_assert_ptr_eq(strpbrk(string2, c3), my_strpbrk(string2, c3));
  ck_assert_ptr_eq(strpbrk(string3, c3), my_strpbrk(string3, c3));
  ck_assert_ptr_eq(strpbrk(string4, c3), my_strpbrk(string4, c3));

  ck_assert_ptr_eq(strpbrk(string, c4), my_strpbrk(string, c4));
  ck_assert_ptr_eq(strpbrk(string1, c4), my_strpbrk(string1, c4));
  ck_assert_ptr_eq(strpbrk(string2, c4), my_strpbrk(string2, c4));
  ck_assert_ptr_eq(strpbrk(string3, c4), my_strpbrk(string3, c4));
  ck_assert_ptr_eq(strpbrk(string4, c4), my_strpbrk(string4, c4));
}
END_TEST

START_TEST(my_strchr_test) {
  char string[STR] = "helloworld";
  char string1[STR] = "hell\0oworld";
  char string2[STR] = "hello world";
  char string3[STR] = "hello\nworld";
  char string4[STR] = "helloworld";
  char string5[] = "";

  for (int i = 0; i < 127; i++) {
    ck_assert_ptr_eq(strchr(string, i), my_strchr(string, i));
    ck_assert_ptr_eq(strchr(string1, i), my_strchr(string1, i));
    ck_assert_ptr_eq(strchr(string2, i), my_strchr(string2, i));
    ck_assert_ptr_eq(strchr(string3, i), my_strchr(string3, i));
    ck_assert_ptr_eq(strchr(string4, i), my_strchr(string4, i));
    ck_assert_ptr_eq(strchr(string5, i), my_strchr(string5, i));
  }
}
END_TEST

START_TEST(my_strcmp_test) {
  char in[][56] = {"Hello world", ",!0123456789", "Good day ",
                   " Seven ElEvEn, zero", "\n12345678?"};
  char in2[][56] = {"Hello world", "019", "Good  ", " SlEvEn", "!"};
  int out1 = my_strcmp(in[_i], in2[_i]);
  int out2 = strcmp(in[_i], in2[_i]);
  ck_assert_int_eq(out1, out2);
}
END_TEST

START_TEST(my_strncmp_test) {
  char string[STR] = "helloworld";
  char string1[STR] = "helloworld";
  char string2[STR] = "hell\0oworld";
  char string3[STR] = "hell\0oworld";
  char string4[STR] = "hell\noworld";
  char string5[STR] = "h1ell\noworld";

  ck_assert_int_eq(strncmp(string, string1, 10),
                   my_strncmp(string, string1, 10));
  ck_assert_int_eq(strncmp(string, string2, 10),
                   my_strncmp(string, string2, 10));
  ck_assert_int_eq(strncmp(string2, string3, 10),
                   my_strncmp(string2, string3, 10));
  ck_assert_int_eq(strncmp(string, string4, 10),
                   my_strncmp(string, string4, 10));
  ck_assert_int_eq(strncmp(string, string5, 10),
                   my_strncmp(string, string5, 10));
  ck_assert_int_eq(strncmp(string, string1, 20),
                   my_strncmp(string, string1, 20));
  ck_assert_int_eq(strncmp(string, string2, 20),
                   my_strncmp(string, string2, 20));
  ck_assert_int_eq(strncmp(string2, string3, 20),
                   my_strncmp(string2, string3, 20));
  ck_assert_int_eq(strncmp(string, string4, 20),
                   my_strncmp(string, string4, 20));
  ck_assert_int_eq(strncmp(string, string5, 20),
                   my_strncmp(string, string5, 20));
}
END_TEST

START_TEST(my_strrchr_test) {
  char string[STR] = "helloworld";
  char string1[STR] = "hell\0oworld";
  char string2[STR] = "hello world";
  char string3[STR] = "hello\nworld";
  char string4[STR] = "helloworld";

  for (int i = 0; i < 127; i++) {
    ck_assert_ptr_eq(strrchr(string, i), my_strrchr(string, i));
    ck_assert_ptr_eq(strrchr(string1, i), my_strrchr(string1, i));
    ck_assert_ptr_eq(strrchr(string2, i), my_strrchr(string2, i));
    ck_assert_ptr_eq(strrchr(string3, i), my_strrchr(string3, i));
    ck_assert_ptr_eq(strrchr(string4, i), my_strrchr(string4, i));
  }
}
END_TEST

START_TEST(my_strspn_test) {
  char string[STR] = "helloworld";
  char string1[STR] = "hell\0oworld";
  char string2[STR] = "hello world";
  char string3[STR] = "hello\nworld";
  char string4[STR] = "helloworld";

  char *c = "j";
  char *c1 = "l";
  char *c2 = "\0";
  char *c3 = "\n";
  char *c4 = " ";
  char *c5 = "jh";
  char *c6 = "llh";
  char *c7 = "\0h";
  char *c8 = "\nh";
  char *c9 = " h";

  ck_assert_int_eq(strspn(string, c), my_strspn(string, c));
  ck_assert_int_eq(strspn(string1, c), my_strspn(string1, c));
  ck_assert_int_eq(strspn(string2, c), my_strspn(string2, c));
  ck_assert_int_eq(strspn(string3, c), my_strspn(string3, c));
  ck_assert_int_eq(strspn(string4, c), my_strspn(string4, c));

  ck_assert_int_eq(strspn(string, c1), my_strspn(string, c1));
  ck_assert_int_eq(strspn(string1, c1), my_strspn(string1, c1));
  ck_assert_int_eq(strspn(string2, c1), my_strspn(string2, c1));
  ck_assert_int_eq(strspn(string3, c1), my_strspn(string3, c1));
  ck_assert_int_eq(strspn(string4, c1), my_strspn(string4, c1));

  ck_assert_int_eq(strspn(string, c2), my_strspn(string, c2));
  ck_assert_int_eq(strspn(string1, c2), my_strspn(string1, c2));
  ck_assert_int_eq(strspn(string2, c2), my_strspn(string2, c2));
  ck_assert_int_eq(strspn(string3, c2), my_strspn(string3, c2));
  ck_assert_int_eq(strspn(string4, c2), my_strspn(string4, c2));

  ck_assert_int_eq(strspn(string, c3), my_strspn(string, c3));
  ck_assert_int_eq(strspn(string1, c3), my_strspn(string1, c3));
  ck_assert_int_eq(strspn(string2, c3), my_strspn(string2, c3));
  ck_assert_int_eq(strspn(string3, c3), my_strspn(string3, c3));
  ck_assert_int_eq(strspn(string4, c3), my_strspn(string4, c3));

  ck_assert_int_eq(strspn(string, c4), my_strspn(string, c4));
  ck_assert_int_eq(strspn(string1, c4), my_strspn(string1, c4));
  ck_assert_int_eq(strspn(string2, c4), my_strspn(string2, c4));
  ck_assert_int_eq(strspn(string3, c4), my_strspn(string3, c4));
  ck_assert_int_eq(strspn(string4, c4), my_strspn(string4, c4));

  ck_assert_int_eq(strspn(string, c5), my_strspn(string, c5));
  ck_assert_int_eq(strspn(string1, c5), my_strspn(string1, c5));
  ck_assert_int_eq(strspn(string2, c5), my_strspn(string2, c5));
  ck_assert_int_eq(strspn(string3, c5), my_strspn(string3, c5));
  ck_assert_int_eq(strspn(string4, c5), my_strspn(string4, c5));

  ck_assert_int_eq(strspn(string, c6), my_strspn(string, c6));
  ck_assert_int_eq(strspn(string1, c6), my_strspn(string1, c6));
  ck_assert_int_eq(strspn(string2, c6), my_strspn(string2, c6));
  ck_assert_int_eq(strspn(string3, c6), my_strspn(string3, c6));
  ck_assert_int_eq(strspn(string4, c6), my_strspn(string4, c6));

  ck_assert_int_eq(strspn(string, c7), my_strspn(string, c7));
  ck_assert_int_eq(strspn(string1, c7), my_strspn(string1, c7));
  ck_assert_int_eq(strspn(string2, c7), my_strspn(string2, c7));
  ck_assert_int_eq(strspn(string3, c7), my_strspn(string3, c7));
  ck_assert_int_eq(strspn(string4, c7), my_strspn(string4, c7));

  ck_assert_int_eq(strspn(string, c8), my_strspn(string, c8));
  ck_assert_int_eq(strspn(string1, c8), my_strspn(string1, c8));
  ck_assert_int_eq(strspn(string2, c8), my_strspn(string2, c8));
  ck_assert_int_eq(strspn(string3, c8), my_strspn(string3, c8));
  ck_assert_int_eq(strspn(string4, c8), my_strspn(string4, c8));

  ck_assert_int_eq(strspn(string, c9), my_strspn(string, c9));
  ck_assert_int_eq(strspn(string1, c9), my_strspn(string1, c9));
  ck_assert_int_eq(strspn(string2, c9), my_strspn(string2, c9));
  ck_assert_int_eq(strspn(string3, c9), my_strspn(string3, c9));
  ck_assert_int_eq(strspn(string4, c9), my_strspn(string4, c9));
}
END_TEST

START_TEST(my_strstr_test) {
  char string[STR] = "helloworld";
  char string1[STR] = "hell\0oworld";
  char string2[STR] = "hello world";
  char string3[STR] = "hello\nworld";
  char string4[STR] = "helloworld";

  char *c = "lo";
  char *c1 = "l\0";
  char *c2 = "\0o";
  char *c3 = "o ";
  char *c4 = " w";
  char *c5 = "o\n";
  char *c6 = "\nw";
  char *c7 = "\0";
  char *c8 = "";
  char *c9 = "NULL";

  ck_assert_ptr_eq(strstr(string, c), my_strstr(string, c));
  ck_assert_ptr_eq(strstr(string1, c), my_strstr(string1, c));
  ck_assert_ptr_eq(strstr(string2, c), my_strstr(string2, c));
  ck_assert_ptr_eq(strstr(string3, c), my_strstr(string3, c));
  ck_assert_ptr_eq(strstr(string4, c), my_strstr(string4, c));

  ck_assert_ptr_eq(strstr(string, c1), my_strstr(string, c1));
  ck_assert_ptr_eq(strstr(string1, c1), my_strstr(string1, c1));
  ck_assert_ptr_eq(strstr(string2, c1), my_strstr(string2, c1));
  ck_assert_ptr_eq(strstr(string3, c1), my_strstr(string3, c1));
  ck_assert_ptr_eq(strstr(string4, c1), my_strstr(string4, c1));

  ck_assert_ptr_eq(strstr(string, c2), my_strstr(string, c2));
  ck_assert_ptr_eq(strstr(string1, c2), my_strstr(string1, c2));
  ck_assert_ptr_eq(strstr(string2, c2), my_strstr(string2, c2));
  ck_assert_ptr_eq(strstr(string3, c2), my_strstr(string3, c2));
  ck_assert_ptr_eq(strstr(string4, c2), my_strstr(string4, c2));

  ck_assert_ptr_eq(strstr(string, c3), my_strstr(string, c3));
  ck_assert_ptr_eq(strstr(string1, c3), my_strstr(string1, c3));
  ck_assert_ptr_eq(strstr(string2, c3), my_strstr(string2, c3));
  ck_assert_ptr_eq(strstr(string3, c3), my_strstr(string3, c3));
  ck_assert_ptr_eq(strstr(string4, c3), my_strstr(string4, c3));

  ck_assert_ptr_eq(strstr(string, c4), my_strstr(string, c4));
  ck_assert_ptr_eq(strstr(string1, c4), my_strstr(string1, c4));
  ck_assert_ptr_eq(strstr(string2, c4), my_strstr(string2, c4));
  ck_assert_ptr_eq(strstr(string3, c4), my_strstr(string3, c4));
  ck_assert_ptr_eq(strstr(string4, c4), my_strstr(string4, c4));

  ck_assert_ptr_eq(strstr(string, c5), my_strstr(string, c5));
  ck_assert_ptr_eq(strstr(string1, c5), my_strstr(string1, c5));
  ck_assert_ptr_eq(strstr(string2, c5), my_strstr(string2, c5));
  ck_assert_ptr_eq(strstr(string3, c5), my_strstr(string3, c5));
  ck_assert_ptr_eq(strstr(string4, c5), my_strstr(string4, c5));

  ck_assert_ptr_eq(strstr(string, c6), my_strstr(string, c6));
  ck_assert_ptr_eq(strstr(string1, c6), my_strstr(string1, c6));
  ck_assert_ptr_eq(strstr(string2, c6), my_strstr(string2, c6));
  ck_assert_ptr_eq(strstr(string3, c6), my_strstr(string3, c6));
  ck_assert_ptr_eq(strstr(string4, c6), my_strstr(string4, c6));

  ck_assert_ptr_eq(strstr(string, c7), my_strstr(string, c7));
  ck_assert_ptr_eq(strstr(string1, c7), my_strstr(string1, c7));
  ck_assert_ptr_eq(strstr(string2, c7), my_strstr(string2, c7));
  ck_assert_ptr_eq(strstr(string3, c7), my_strstr(string3, c7));
  ck_assert_ptr_eq(strstr(string4, c7), my_strstr(string4, c7));

  ck_assert_ptr_eq(strstr(string, c8), my_strstr(string, c8));
  ck_assert_ptr_eq(strstr(string1, c8), my_strstr(string1, c8));
  ck_assert_ptr_eq(strstr(string2, c8), my_strstr(string2, c8));
  ck_assert_ptr_eq(strstr(string3, c8), my_strstr(string3, c8));
  ck_assert_ptr_eq(strstr(string4, c8), my_strstr(string4, c8));

  ck_assert_ptr_eq(strstr(string, c9), my_strstr(string, c9));
  ck_assert_ptr_eq(strstr(string1, c9), my_strstr(string1, c9));
  ck_assert_ptr_eq(strstr(string2, c9), my_strstr(string2, c9));
  ck_assert_ptr_eq(strstr(string3, c9), my_strstr(string3, c9));
  ck_assert_ptr_eq(strstr(string4, c9), my_strstr(string4, c9));
}
END_TEST

START_TEST(my_strtok_test) {
  char string[1024] = "tok/tok1/tok2/tok3/tok4";
  char mystring[1024] = "tok/tok1/tok2/tok3/tok4";
  char string1[1024] = "hell\0oworld";
  char mystring1[1024] = "hell\0oworld";
  char string2[1024] = "hello world";
  char mystring2[1024] = "hello world";
  char string3[1024] = "hello\nworld";
  char mystring3[1024] = "hello\nworld";
  char string4[1024] = "helloworld";
  char mystring4[1024] = "helloworld";

  char sep[STR] = "/";

  char *istr;
  char *istr1;

  istr = strtok(string, sep);
  istr1 = my_strtok(mystring, sep);

  ck_assert_str_eq(strtok(string, sep), my_strtok(mystring, sep));
  ck_assert_str_eq(istr, istr1);

  while (istr != NULL) {
    ck_assert_str_eq(istr, istr1);
    istr = strtok(NULL, sep);
    istr1 = my_strtok(NULL, sep);
  }

  istr = strtok(string1, sep);
  istr1 = my_strtok(mystring1, sep);

  ck_assert_str_eq(strtok(string1, sep), my_strtok(mystring1, sep));

  while (istr != NULL) {
    ck_assert_str_eq(istr, istr1);
    istr = strtok(NULL, sep);
    istr1 = my_strtok(NULL, sep);
  }

  istr = strtok(string2, sep);
  istr1 = my_strtok(string2, sep);

  ck_assert_str_eq(strtok(string2, sep), my_strtok(mystring2, sep));

  while (istr != NULL) {
    ck_assert_str_eq(istr, istr1);
    istr = strtok(NULL, sep);
    istr1 = my_strtok(NULL, sep);
  }

  istr = strtok(string3, sep);
  istr1 = my_strtok(string3, sep);

  ck_assert_str_eq(strtok(string3, sep), my_strtok(mystring3, sep));

  while (istr != NULL) {
    ck_assert_str_eq(istr, istr1);
    istr = strtok(NULL, sep);
    istr1 = my_strtok(NULL, sep);
  }

  istr = strtok(string4, sep);
  istr1 = my_strtok(string4, sep);

  ck_assert_str_eq(strtok(string4, sep), my_strtok(mystring4, sep));

  while (istr != NULL) {
    ck_assert_str_eq(istr, istr1);
    istr = strtok(NULL, sep);
    istr1 = my_strtok(NULL, sep);
  }
}
END_TEST

START_TEST(my_strcspn_test) {
  char string[1024] = "tok/tok1/tok2/tok3/tok4";
  char string1[1024] = "hell\0oworld";
  char string2[1024] = "hello world";
  char string3[1024] = "hello\nworld";
  char string4[1024] = "helloworld";

  char c[STR] = "/\n lo\0";

  ck_assert_int_eq(strcspn(string, c), my_strcspn(string, c));
  ck_assert_int_eq(strcspn(string1, c), my_strcspn(string1, c));
  ck_assert_int_eq(strcspn(string2, c), my_strcspn(string2, c));
  ck_assert_int_eq(strcspn(string3, c), my_strcspn(string3, c));
  ck_assert_int_eq(strcspn(string4, c), my_strcspn(string4, c));
}
END_TEST

START_TEST(my_strncpy_test) {
  char string01[1024] = "tok/tok1/tok2/tok3/tok4";
  char string02[1024] = "tok/tok1/tok2/tok3/tok4";
  char string03[1024] = "hell\0oworld";
  char string04[1024] = "hell\0oworld";
  char string05[1024] = "hello world";
  char string06[1024] = "hello world";
  char string07[1024] = "hello\nworld";
  char string08[1024] = "hello\nworld";
  char string09[1024] = "helloworld";
  char string10[1024] = "helloworld";
  char str[1024] = {0};
  char strour[1024] = {0};

  ck_assert_str_eq(strncpy(str, string01, 30),
                   my_strncpy(strour, string02, 30));
  ck_assert_str_eq(strncpy(str, string03, 30),
                   my_strncpy(strour, string04, 30));
  ck_assert_str_eq(strncpy(str, string05, 30),
                   my_strncpy(strour, string06, 30));
  ck_assert_str_eq(strncpy(str, string07, 30),
                   my_strncpy(strour, string08, 30));
  ck_assert_str_eq(strncpy(str, string09, 30),
                   my_strncpy(strour, string10, 30));

  ck_assert_str_eq(strncpy(str, string01, 10),
                   my_strncpy(strour, string02, 10));
  ck_assert_str_eq(strncpy(str, string03, 10),
                   my_strncpy(strour, string04, 10));
  ck_assert_str_eq(strncpy(str, string05, 10),
                   my_strncpy(strour, string06, 10));
  ck_assert_str_eq(strncpy(str, string07, 10),
                   my_strncpy(strour, string08, 10));
  ck_assert_str_eq(strncpy(str, string09, 10),
                   my_strncpy(strour, string10, 10));
}
END_TEST

START_TEST(my_strcpy_test) {
  char string01[1024] = "tok/tok1/tok2/tok3/tok4";
  char string03[1024] = "hell\0oworld";
  char string05[1024] = "hello world";
  char string07[1024] = "hello\nworld";
  char string09[1024] = "helloworld";
  char str[1024] = {0};
  char strour[1024] = {0};

  ck_assert_str_eq(strcpy(str, string01), my_strcpy(strour, string01));
  ck_assert_str_eq(strcpy(str, string03), my_strcpy(strour, string03));
  ck_assert_str_eq(strcpy(str, string05), my_strcpy(strour, string05));
  ck_assert_str_eq(strcpy(str, string07), my_strcpy(strour, string07));
  ck_assert_str_eq(strcpy(str, string09), my_strcpy(strour, string09));
}
END_TEST

START_TEST(my_strerror_test) {
  for (int i = -30; i <= 300; i++) {
    ck_assert_str_eq(my_strerror(i), my_strerror(i));
  }
}
END_TEST

Suite *test_string(void) {
  Suite *s = suite_create("string_func");
  TCase *tc = tcase_create("string_tc");

  tcase_add_test(tc, my_memchr_test1);
  tcase_add_test(tc, my_memchr_test2);
  tcase_add_test(tc, my_memchr_test3);
  tcase_add_test(tc, my_memcmp_test1);
  tcase_add_test(tc, my_memcmp_test2);
  tcase_add_test(tc, my_memcpy_test1);
  tcase_add_test(tc, my_memcpy_test2);
  tcase_add_test(tc, my_memmove1_test);
  tcase_add_test(tc, my_memmove2_test);
  tcase_add_test(tc, my_memmove3_test);
  tcase_add_test(tc, my_memmove4_test);
  tcase_add_test(tc, my_memset_test);
  tcase_add_test(tc, my_strcat_test);
  tcase_add_test(tc, my_strncat_test);
  tcase_add_test(tc, my_strpbrk_test);
  tcase_add_test(tc, my_strchr_test);
  tcase_add_loop_test(tc, my_strcmp_test, 0, 5);
  tcase_add_test(tc, my_strncmp_test);
  tcase_add_test(tc, my_strrchr_test);
  tcase_add_test(tc, my_strspn_test);
  tcase_add_test(tc, my_strstr_test);
  tcase_add_test(tc, my_strtok_test);
  tcase_add_test(tc, my_strcspn_test);
  tcase_add_test(tc, my_strncpy_test);
  tcase_add_test(tc, my_strcpy_test);
  tcase_add_test(tc, my_strerror_test);

  suite_add_tcase(s, tc);
  return s;
}
