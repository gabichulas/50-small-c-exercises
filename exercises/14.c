#include "exercises.h"
#include "lib.h"
#include <stdio.h>

/* Return the first matching character's address, or NULL. */
char *my_strchr(const char *s, int c) {
  do {
    if (*s == c) {
      return (char *)s;
    }
  } while (*s++ != '\0');
  return NULL;
}

#ifndef EXERCISE_TEST
int main(void) { return 0; }
#endif
