#include "exercises.h"
#include "lib.h"
#include <stdio.h>

/* Compare the 2 strings lexicographically */
int my_strcmp(const char *a, const char *b) {
  while (*a != '\0' && (*a == *b)) {
    a++;
    b++;
  }

  int u_a = *(const unsigned char *)a;
  int u_b = *(const unsigned char *)b;

  if (u_a > u_b) {
    return 1;
  } else if (u_a < u_b) {
    return -1;
  }
  return 0;
}

#ifndef EXERCISE_TEST
int main(void) { my_strcmp("\xFF", "\x7F"); }
#endif
