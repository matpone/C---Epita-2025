#include <stdio.h>

unsigned int number_digits(unsigned int n)
{
    if (n == 0)
        return 1;

    unsigned int k = 0;
    while (n != 0)
    {
        n = n / 10;
        k++;
    }
    return k;
}
