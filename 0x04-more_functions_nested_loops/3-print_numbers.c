#include "main.h"

/**
 * print_numbers - prints the numbers from 0 - 9 followed by a new line
 *
 * Description:The function prints the numbers from 0 - 9 followed by new line
 * It returns nothing
 */
void print_numbers(void)
{
	for (int c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
		putchar('\n');
}
