#include "exercises.h"
#include "lib.h"
#include <stdio.h>

/* Compare at most count bytes of the two strings. */
int my_strncmp(const char *a, const char *b, size_t count) {
  int i;
  char aa[count], bb[count];

  if (count == 0) {
    return 0;
  }
  for (i = 0; i < (int)count; i++) {
    if (*a != '\0') {
      aa[i] = *a;
      a++;
    }

    if (*b != '\0') {
      bb[i] = *b;
      b++;
    }
  }

  return my_strcmp(aa, bb);
}

#ifndef EXERCISE_TEST
int main(void) {
  char a[5] = "abd";
  char b[5] = "abc";
  printf("%d \n", my_strncmp(a, b, 2));
}
#endif
