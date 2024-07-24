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

	for (j = 0; j <= 9; j++)
	{
		if (j == 2 || j == 4)
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
