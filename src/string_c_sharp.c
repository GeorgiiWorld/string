#include "my_string.h"

void *my_to_upper(const char *str) {
  char *copy = MY_NULL;
  if (str != MY_NULL) {
    int size = my_strlen(str) + 1;
    copy = (char *)malloc(size * sizeof(char));
    if (copy != MY_NULL) {
      for (int i = 0; i < size - 1; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
          copy[i] = str[i] - 32;
        } else {
          copy[i] = str[i];
        }
      }
      copy[size - 1] = '\0';
    }
  }
  return copy;
}

void *my_to_lower(const char *str) {
  char *copy = MY_NULL;
  if (str != MY_NULL) {
    int size = my_strlen(str) + 1;
    copy = (char *)malloc(size * sizeof(char));
    if (copy != MY_NULL) {
      for (int i = 0; i < size; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
          copy[i] = str[i] + 32;
        } else {
          copy[i] = str[i];
        }
      }
      copy[size - 1] = '\0';
    }
  }
  return copy;
}

void *my_insert(const char *src, const char *str, my_size_t start_index) {
  char *res = MY_NULL;
  if (src != MY_NULL && str != MY_NULL) {
    my_size_t src_size = my_strlen(src);
    my_size_t str_size = my_strlen(str);
    my_size_t new_size = src_size + str_size + 1;
    if (start_index <= src_size) {
      res = (char *)calloc(new_size, sizeof(char));
      if (res != MY_NULL) {
        my_size_t j = 0, k = 0;
        for (my_size_t i = 0; i < new_size - 1; i++) {
          if (i < start_index || i > start_index + str_size - 1) {
            res[i] = src[j];
            j++;
          } else {
            res[i] = str[k];
            k++;
          }
        }
        res[new_size - 1] = '\0';
      }
    }
  }
  return res;
}

void *my_trim(const char *src, const char *trim_chars) {
  char *res = MY_NULL;
  if (src != MY_NULL) {
    long srcSize = my_strlen(src);
    long trimSize = 0;
    if (trim_chars != MY_NULL) trimSize = my_strlen(trim_chars);
    if (trimSize != 0) {
      int resSize;
      int s = 0;
      int e = srcSize - 1;
      int f = 0;  // Поиск индекса первого символа
      for (; s < srcSize && !f; s++) {
        int trimf = 0;
        for (int i = 0; i < trimSize && !trimf; i++) {
          if (src[s] == trim_chars[i]) trimf = 1;
        }
        if (!trimf) f = 1;
      }  // Если было совпадение, возврат на 1 позицию
      if (f) s--;  // Поиск индекса последнего символа
      for (; e > 0 && f; e--) {
        int trimf = 0;
        for (int i = 0; i <= trimSize && !trimf; i++) {
          if (src[e] == trim_chars[i]) trimf = 1;
        }
        if (!trimf) f = 0;
      }  // Если было совпадение, возврат на 1 позицию
      if (!f) e++;  // Запись строки с 's' индекса до 'e' индекса
      resSize = e - s + 2;
      res = (char *)calloc((resSize), sizeof(char));
      if (res != MY_NULL) {
        for (int i = 0; i < resSize; i++) {
          res[i] = src[s];
          s++;
        }
        res[resSize - 1] = '\0';
      }
    } else {
      res = (char *)calloc((srcSize + 1), sizeof(char));
      if (res != MY_NULL) {
        my_strcat(res, src);
      }
    }
  }
  return res;
}
