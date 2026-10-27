#include "exercises.h"
#include "lib.h"

/* Copy count bytes between non-overlapping memory regions. */
void *my_memcpy(void *destination, const void *source, size_t count) {
  int i;
  char *dst = (char *)destination;
  const char *src = (const char *)source;

  for (i = 0; i < (int)count; i++) {
    *dst = *src;
    dst++;
    src++;
  }
  return destination;
}

#ifndef EXERCISE_TEST
int main(void) { return 0; }
#endif
