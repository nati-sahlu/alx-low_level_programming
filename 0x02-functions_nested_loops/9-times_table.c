#include "main.h"

/*
 *
 *
 */

void times_table(void)
{
	int i;
	int j;
	int n;
	int c , d;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (n > 9)
			{
				c = n % 10;
				d = n / 10;
				_putchar(d + '0');
				_putchar(c + '0');
			}
			else
			{
			_putchar(n + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
