#include "main.h"

/*
 *
 *
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0 ; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i':'j + '0');
		}
	}
}
