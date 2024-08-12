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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			_putchar(n + '0');
		}
		_putchar('\n')
	}
}
