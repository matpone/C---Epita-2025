#include <stdio.h>

void display_square(int width)
{
    if (width > 0)
    {
        if (width % 2 == 0)
            width += 1;
        for (int i = 0; i < (width + 1) / 2; i++)
        {
            for (int y = 0; y < width; y++)
            {
                if (i == 0 || i == (width + 1) / 2 - 1)
                    putchar(42);
                else if (y == 0 || y == width - 1)
                    putchar(42);
                else
                    putchar(32);
            }
            putchar(10);
        }
    }
}
