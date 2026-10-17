#include "exercises.h"
#include "lib.h"

/* Recognize the six ASCII whitespace characters. */
int my_isspace(int c) { return ((c >= 9 && c <= 13) || c == ' '); }

#ifndef EXERCISE_TEST
int main(void) {
    printf("my_isspace(' ') = %d\n", my_isspace(' '));
    return 0;
}
#endif
