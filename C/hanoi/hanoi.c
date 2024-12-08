#include <stdio.h>

void han(unsigned n, int k, int y, int b)
{
    if (n != 0)
    {
        han(n - 1, k, b, y);
        putchar(48 + k);
        putchar(45);
        putchar(62);
        putchar(48 + b);
        putchar(10);
        han(n - 1, y, k, b);
    }
}

void hanoi(unsigned n)
{
    han(n, 1, 2, 3);
}
