#include "exercises.h"
#include "lib.h"
#include <stdio.h>

/* Count how many characters the provided string has. */
size_t my_strlen(const char *s) {
  unsigned int i = 0;
  char curr = s[i];

  while (curr != '\0') {
    ++i;
    curr = s[i];
  }

  return i;
}

#ifndef EXERCISE_TEST
int main(void) { my_strlen("hola"); }
#endif
