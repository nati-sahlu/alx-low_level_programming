#include "function_pointers.h"
	#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each elements
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function
 *
 * Description:This function iterates over an array & applies
 * the specified function
 * to each element It checks if  the array or the function pointer is 0 before
 * performing any operations
 *
 * Return: void
 */
	void array_iterator(int *array, size_t size, void (*action)(int))
	{
		unsigned int i;


		if (array == NULL || action == NULL)
			return;


		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
