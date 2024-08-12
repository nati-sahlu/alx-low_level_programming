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
		f = n + m;
		if (f > 9)
		{
			_putchar(f / 10 + '0');
			_putchar(f % 10 + '0');
		}
		else 
		{
			 _putchar(f + '0');
			 n = m;
			 m = f;
		}
		_putchar(',');
		_putchar(' ');
	}
	return (0);
}
