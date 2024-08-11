#include "main.h"

/*
 * print_last_digit -  prints the last digit of a number.
 * @n - given integer
 *
 * Description - This function prints the last digit of a number and return
 * the last digit
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int d;

	if (n >= 0)
	{
		d = n % 10;
		_putchar(d + '0');
		return (d);
	}
		n = -1 * n;
		d = n % 10;
		_putchar(d + '0');
		return (d);

}
