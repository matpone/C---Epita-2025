#include <stdio.h>
int int_palindrome(int n)
{
    int a = 0;
    int b = n;

    while (b != 0)
    {
        a = a * 10;
        a = a + b % 10;
        b = b / 10;
    }
    if (a == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
