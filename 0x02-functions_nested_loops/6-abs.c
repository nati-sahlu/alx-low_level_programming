#include "main.h"

/* _abs -  computes the absolute value of an integer.
 *
 * Description - This function takes an integer and change it to
 * unsigned integer
 *
 * Return: 0
 */

int _abs(int n)
{

	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		n *= -1;
	_putchar(n);
	}
	return (0);
}
