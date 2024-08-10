#include "main.h"

/*
 * _islower - checks for lowercase character.
 *
 * Description - this functions take an int and checks if it is a lowercase
 * if true returns 1 otherwise returns 0.
 *
 * Return: Returns 1 if c is lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{

	if (c >= 97 && c =< 122)
	{

	return (1);
	}
	return (0);

}
