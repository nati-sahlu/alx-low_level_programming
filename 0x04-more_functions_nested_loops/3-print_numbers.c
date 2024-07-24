#include "main.h"

/**
 * print_numbers - prints the numbers from 0 - 9 followed by a new line
 *
 * Description:The function prints the numbers from 0 - 9 followed by new line
 * It returns nothing
 */
void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
		putchar('\n');
}
