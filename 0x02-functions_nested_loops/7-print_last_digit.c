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

	if (n <= 0)
	{
		n = n * -1;
		d = n % 10;
		_putchar(d);
	}
	else
	{
		d = n % 10;
		_putchar(d);
                return (d);
	}

}
