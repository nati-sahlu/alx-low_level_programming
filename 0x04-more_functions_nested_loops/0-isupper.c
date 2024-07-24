#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * 
 * Description: This function takes a character as an argument and returns 1
 * if the character is an uppercase letter (from 'A' to 'Z'). Otherwise,
 * it returns 0.
 * 
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
