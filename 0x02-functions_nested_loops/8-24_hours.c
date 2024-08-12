#include "main.h"

/*
 *
 *
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int f;

	for (i = 0 ; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 2 && j >= 4)
		 break;
			for (k = 0; k < 6; k++)
			{
				for (f = 0; f < 10; f++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(f + '0');
					_putchar('\n');
				}
			}
		}
	}
}
