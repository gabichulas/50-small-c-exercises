#include "exercises.h"
#include "lib.h"

/* Return the absolute value; the contract excludes INT_MIN. */
int my_abs(int value) { return (value >= 0 ? value : (value ^ (value >> 31)) + 0x1); }

// Para hacerlo totalmente bitwise, pero mas enroscado:

int my_abs_bw(int value) { return ((value ^ (value >> 31)) - (value >> 31)); }

// Esto funciona porque (value >> 31) es 1111... = -1 para negativos y 0000... = 0 para positivos.
// Al restar abs - mascara, si es negativo estamos haciendo abs - (-1), lo que necesitamos, ya que
// el menor int es -(INT_MAX) + 1 (e.g. -127 y 128 para int8) y al hacerlo con un numero positivo,
// la mascara es igual a 0, por lo que el numero se mantiene intacto.

#ifndef EXERCISE_TEST
int main(void) {
    printf("my_abs(-42) = %d\n", my_abs(-42));
    return 0;
}
#endif
