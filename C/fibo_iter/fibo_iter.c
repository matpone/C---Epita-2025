#include <stdio.h>

unsigned long fibo_iter(unsigned long n)
{
    if (n <= 1)
    {
        return n;
    }

    unsigned long k = 0;
    unsigned long m = 1;
    unsigned long l;

    for (unsigned long i = 2; i <= n; i++)
    {
        l = k + m;
        k = m;
        m = l;
    }
    return l;
}
