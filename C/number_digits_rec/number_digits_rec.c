#include <stddef.h>

unsigned int number_digits_rec(unsigned int n)
{
    if (n > 10)
    {
        return (1 + number_digits_rec(n / 10));
    }
    else
    {
        return 1;
    }
}
