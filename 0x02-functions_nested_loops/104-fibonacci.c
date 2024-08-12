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

int main(void)
{
	int n = 0;
	int m = 1;
	int i, f;

	for (i = 0;i < 98; i++)
	{
		f = n + m;

        print_int(f);

       		n = m;
		m = f;
		
		if ( i != 97)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	return (0);
}
