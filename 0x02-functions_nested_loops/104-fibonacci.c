#include "main.h"

/*
 *
 *
 *
 */

int main(void)
{
	int n = 1;
	int m = 0;
	int i = 0;
	int f ;

	while (i < 98)
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
		i++;
	}
	return (0);
}
