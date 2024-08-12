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
			while (f != 0)
			{
				d = f % 10;
				f = f / 10;
				 _putchar(d + '0');
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
