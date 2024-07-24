#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a pointer to a function
 * @name: string to be printed
 * @f: pointer to a function that takes a char * as argument
 *
 * Description: This function prints a name using a pointer to a function.
 * It checks if the name or the function pointer is NULL before calling
 * the function pointer.
 *
 * Return: nothing
 */
	void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;


		f(name);
	}
