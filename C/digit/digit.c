unsigned int digit(int n, int k)
{
    if (n <= 0 || k <= 0)
    {
        return 0;
    }
    while (n > 1 && k > 1)
    {
        k = k - 1;
        n = n / 10;
    }
    if (k > 1)
        return 0;
    else
        return n % 10;
}
