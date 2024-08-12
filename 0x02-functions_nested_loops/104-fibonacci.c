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
	int i, f, d;

	for (i = 0;i < 98; i++)
	{
		f = n + m;
		if (f > 9)
		{
			while (f != 0)
			{
				d = f % 10;
				if (f > 9 && f < 100)
				{
					_putchar(f / 10 + '0');
				}
				 _putchar(d + '0');
				 f = f / 10;
			}

		}
		else 
		{
			 _putchar(f + '0');
		}
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
