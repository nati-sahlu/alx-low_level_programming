#include "main.h"

/*
 * _isalpha - checks for alphabet character.
 *@c - integer
 *
 * Description - this functions take an int and checks if it is a uppercase
 * or lowercase it returns 1 otherwise returns 0.
 *
 * Return: Returns 1 if c is alphabet character
 * Returns 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	if else(c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
