#include "main.h"

/*
 * print_sign -  prints the sign of a number.
 *
 * Description - this functions take an int and checks if it is a positive or
 * negetive or zero  Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero.
 *
 * Return: Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int c;

	c = n % 10;
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
	return (0);
	}
	else 
	{
		_putchar('-');
	return (-1);
	}
}

