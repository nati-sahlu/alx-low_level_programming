#include "main.h"

/*
 * _isalpha - checks for uppercase character.
 *@c - integer
 *
 * Description - this functions take an int and checks if it is a uppercase
 * if true returns 1 otherwise returns 0.
 *
 * Return: Returns 1 if c is lowercase
 * Returns 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);

}
