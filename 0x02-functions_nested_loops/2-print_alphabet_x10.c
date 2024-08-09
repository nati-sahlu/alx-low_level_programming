#include "main.h"

/*
 * void print_alphabet_x10(void) -this func prints the alphabet in lowercase,
 * ten times followed by a new line
 *
 * Description - this function prints the alphabet, in lowercase,
 * followed by a new line and returns nothing ten times.
 *
 */

void print_alphabet_x10(void)
{
        char c;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			 _putchar(c);
		}
		_putchar('\n');
	}
}
