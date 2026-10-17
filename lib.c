#include "lib.h"

/* Put your reusable implementations here. This file is linked into every
 * playground and test executable. Do not add a main function here. */
typedef int keep_translation_unit_nonempty;
int my_isalpha(int c) { return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)); }
int my_isdigit(int c) { return (c >= '0' && c <= '9'); }
int my_toupper(int c) {
    if (c >= 'a' && c <= 'z') {
        return (c - 32);
    }
    return c;
}
