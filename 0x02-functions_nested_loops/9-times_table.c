#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function prints the multiplication table for
 * the numbers 0 through 9. The results are formatted in a grid where
 * each cell contains the product of the row and column indices. If
 * the product is a single digit, it is preceded by a space for alignment.
 * The cells are separated by commas and spaces.
 *
 * Return: void
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
			if (n > 9)
			{
				_putchar(n % 10 + '0');
				_putchar(n / 10 + '0');
			}
			else
			{
			_putchar(' ');
			_putchar(n + '0');
			}
			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
