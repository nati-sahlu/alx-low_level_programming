#include "main.h"

/**
 * _pow - This funcution calculates base ^ power
 * @base: base of our exponent
 * @power: power of our exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= power; i++)
		n *= base;
	return (n);
}

/**
 * print_binary - This functon prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, ch;
	char f;

	f = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		ch = n & d;
		if (ch == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
