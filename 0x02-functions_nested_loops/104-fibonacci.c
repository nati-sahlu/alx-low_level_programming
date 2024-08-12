#include "main.h"

/*
 *
 *
 *
 */

void print_int(unsigned long int n)
{
	if (n / 10 != 0)
	{
		print_int(n / 10);
	}
_putchar(n % 10 + '0');
}

int main(void)
{
	unsigned long int n = 1;
	unsigned long int m = 2;
	unsigned long int f;
	int i;

	_putchar(n);
	_putchar(',');
	_putchar(' ');
	_putchar(m);
	_putchar(',');
	_putchar(' ');

	for (i = 0; i < 98; i++)
	{
		f = n + m;
		print_int(f);

		n = m;
		m = f;

		if (i != 97)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	 _putchar('\n');
	return (0);
}
