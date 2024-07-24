#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4
 *
 * Description: This function prints the numbers from 0 to 9 except 2 and 4,
 * followed by a new line. It returns nothing.
 *
 * Returns: always 0
 */
void print_most_numbers(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		if (j == 50 || j == 52)
		{
			continue;
		}
		else
		{
			_putchar(j);
		}
	}
		_putchar('\n');
}
