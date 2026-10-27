#include "exercises.h"
#include "lib.h"
#include <stdio.h>

/* Append source to destination; return destination. */
char *my_strcat(char *destination, const char *source) {
  char *start = destination;

  while (*destination != '\0') {
    destination++;
  }

  while (*source != '\0') {
    *destination = *(char *)source;
    source++;
    destination++;
  }

  *destination = '\0';
  return start;
}

#ifndef EXERCISE_TEST
int main(void) {
  char dest[20] = "hola";
  const char src[3] = " C";

  printf("%s \n", my_strcat(dest, src));
}
#endif
