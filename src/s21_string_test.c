#include <stdio.h>

#include "s21_string.h"

void s21_strlen_test(const char *input, int expected) {
    int result = s21_strlen(input);
    printf("Input: \"%s\", Result: %d, %s", input, result,
           (result == expected) ? "SUCCESS" : "FAIL");
}

int main() {
#ifdef STRLEN
    s21_strlen_test("Hello,\n World!", 14);
    s21_strlen_test("", 0);
    s21_strlen_test("12345", 5);
    s21_strlen_test("A", 1);
    s21_strlen_test("AB", 1);
#endif
    return 0;
}
