#include "main.h"

/*
 *
 *
 *
 */

void print_int(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    if (n / 10 != 0)
    {
        print_int(n / 10);
    }
putchar(n % 10 + '0');
}
