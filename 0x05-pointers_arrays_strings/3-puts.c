#include "main.h"

/*
 *
 *
 */

void _puts(char *str)
{
	char n[] = *str;
	int i;

		for (i = 0; i < sizeof(*str) ; i++)
		{
			_putchar(i);

		}
	_putchar('\n');
}
