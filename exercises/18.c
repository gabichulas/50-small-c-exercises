#include "exercises.h"
#include "lib.h"

/* Write count bytes, copying source then padding with null bytes. */
char *my_strncpy(char *destination, const char *source, size_t count) {
  int i;
  char *dest = destination;
  for (i = 0; i < (int)count; i++) {
    if (*source == '\0') {
      dest[i] = '\0';
      continue;
    }

    dest[i] = *source;
    source++;
  }

  return dest;
}

#ifndef EXERCISE_TEST
int main(void) { return 0; }
#endif
