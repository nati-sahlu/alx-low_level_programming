#include "main.h"

/*
 *
 *
 *
 */

int main(void)
{
	int n = 1;
	int m;
	
	for ( m = 0; m < 100; m + n)
	{
		m = n + m;
		n = m;
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
