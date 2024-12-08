#include <stdio.h>

int my_round(float n)
{
    int partie_entiere = n;
    float partie_decimale = n - partie_entiere;

    if (n > 0)
    {
        if (partie_decimale >= 0.5)
            return partie_entiere + 1;
        else
            return partie_entiere;
    }
    else if (n < 0)
    {
        if (partie_decimale > -0.5)
            return partie_entiere;
        else
            return partie_entiere - 1;
    }
    else
    {
        return 0;
    }
}
