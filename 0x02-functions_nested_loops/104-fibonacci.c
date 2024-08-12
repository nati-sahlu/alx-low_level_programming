#include "main.h"

/*
 *
 *
 *
 */

int main(void)
{
	int n = 0;
	int m = 1;
	int i, f;

	for (i = 0;i < 98; i++)
	{
		m = n + m;
		f = m;
		n = f;
		if (m > 9)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		else 
		{
			 _putchar(m + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	return (0);
}
