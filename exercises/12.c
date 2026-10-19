#include "exercises.h"
#include "lib.h"

/* Copy a string and its terminator; return destination. */
char *my_strcpy(char *destination, const char *source) {
  unsigned int i = 0;
  while (1) {
    if (source[i] == '\0') {
      destination[i] = source[i];
      return destination;
    }
    destination[i] = source[i];
    i++;
  }
}

// Otra implementacion, mas avanzada y optimizada:

char *my_strcpy_2(char *destination, const char *source) {
  char *start = destination;

  while ((*destination++ = *source++)) {
  }
  return start;
}

// Devolvemos start porque *destination no es un string (los strings no existen!), sino que es
// simplemente un puntero al primer caracter de una cadena de caracteres. Definimos *start solo para
// guardar este puntero y devolverlo finalmente

#ifndef EXERCISE_TEST
int main(void) { return 0; }
#endif
