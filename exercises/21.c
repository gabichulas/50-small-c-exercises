#include "exercises.h"
#include "lib.h"

/* Fill count bytes with value converted to unsigned char. */
void *my_memset(void *destination, int value, size_t count) {
  int i;
  char *ptr = (char *)destination;

  for (i = 0; i < (int)count; i++) {
    *ptr = (char)value;
    ptr++;
  }
  return destination;
}

#ifndef EXERCISE_TEST
int main(void) { return 0; }
#endif
