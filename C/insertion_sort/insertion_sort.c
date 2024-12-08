#include <stdio.h>

void insertion_sort(int array[], size_t size)
{
    size_t a, b;
    int c;

    for (a = 1; a < size; a++)
    {
        c = array[a];
        b = a;

        while (b > 0 && array[b - 1] > c)
        {
            array[b] = array[b - 1];
            b = b - 1;
        }
        array[b] = c;
    }
}
