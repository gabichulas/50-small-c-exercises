#include "exercises.h"
#include "lib.h"

/* Lowercase an ASCII uppercase letter; preserve every other int. */
int my_tolower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return (c + 32);
    }
    return c;
}

#ifndef EXERCISE_TEST
int main(void) {
    printf("my_tolower('G') = %d\n", my_tolower('G'));
    return 0;
}
#endif
