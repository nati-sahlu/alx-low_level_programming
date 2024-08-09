#include "main.h"

/*
 * print_alphabet -this func prints the alphabet in lowercase,
 * followed by a new line
 *
 * Description - this function prints the alphabet, in lowercase,
 * followed by a new line and returns nothing.
 *
 */

void print_alphabet(void);
{
	char c

	for (c = 0; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
