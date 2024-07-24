#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Description: This function prints the numbers from 0 to 14, ten times,
 * each followed by a new line. It returns nothing.
 *
 * Return: void
 */
void more_numbers(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
	for (k = 0; k <= 14; k++)
	{
		if (k > 9)
		{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
