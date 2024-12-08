#include <stddef.h>

int my_pow(int a, int b)
{
    if (b == 0)
        return (1);

    if (a == 0)
        return (0);

    if (b == 1)
        return (a);

    if (a == 1)
        return (1);

    int resultat = 1;

    while ((b != 0))
    {
        resultat = resultat * a;
        b = b - 1;
    }

    return (resultat);
}
