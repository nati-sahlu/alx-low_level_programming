#include "main.h"

/**
 * print_numbers - prints the numbers from 0 - 9 followed by a new line
 *
 * Description:The function prints the numbers from 0 - 9 followed by new line
 * It returns nothing
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int c;

	for ( c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}
