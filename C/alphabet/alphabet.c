#include <stdio.h>

int main(void)
{
    for (int k = 'a'; k < 'z'; k++)
    {
        putchar(k);
        putchar(32);
    }
    putchar(122);
    putchar(10);
    return 0;
}
