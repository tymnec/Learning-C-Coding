#include <stdio.h>

// Solve Precedence Questions:

int main()
{
    int a = 5 * 2 - 3 * 2;
    int b = 5 * 2 / 2 * 3;
    int c = 5 * (2 / 2) * 3;
    int d = 5 + 2 / 2 * 3;
    printf("a : %d b: %d c: %d d: %d", a, b, c, d);
    return 0;
}