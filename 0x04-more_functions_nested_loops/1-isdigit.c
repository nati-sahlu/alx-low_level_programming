#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to be checked
 *
 * Description: This function takes a character as an argument and returns 1
 * if the character is a digit (from '0' to '9'). Otherwise,
 * it returns 0.
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
