#include "mai.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @n: string to be modified
 * Return: pointer to the modified string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
