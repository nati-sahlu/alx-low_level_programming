#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: array of integers
 * @size: size of elements in the array
 * @cmp: pointer to the function to be used for comparison
 *
 * Description: This function searches for an integer in an array. It iterates
 * over the array
 * and applies the comparison function `cmp` to each element.
 * If the comparison function returns 1, the index of the element is returned.
 * If no elements match or if size is less than or equal to 0, -1 is returned.
 *
 * Return: the index of the first matching element, or -1 if no match is found
 */
	int int_index(int *array, int size, int (*cmp)(int))
	{
		int i;


		if (array == NULL || size <= 0 || cmp == NULL)
			return (-1);


		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}

