#include "main.h"

/*
 * _abs -  computes the absolute value of an integer.
 *
 * Description - This function takes an integer and change it to
 * unsigned integer
 *
 * Return: 0
 */

int _abs(int n)
{
	int c

	c = n % 10;
	if (c < 30)
	{
	n =  c * -10;
		 _putchar(n);
	}
		_putchar(n);
	return (0);
}
