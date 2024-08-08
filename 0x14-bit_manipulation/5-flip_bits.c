#include "main.h"

/**
 * flip_bits - Yhis func counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cbit = 0;
	unsigned long int c;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = ex >> i;
		if (c & 1)
		{
			cbit++;
		}
	}

	return (cbit);
}
