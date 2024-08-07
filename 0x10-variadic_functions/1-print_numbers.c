#include "variadic_functions.h"
	#include <stdio.h>
	#include <stdarg.h>


/**
 * print_numbers - Prints numbers, separated by a specified string.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to be printed.
 *
 * Description: This function takes a variable number of integers and prints
 * them, with a specified separator string between each number. If separator
 * is NULL, numbers are printed without any separation. The function ends
 * with a newline.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;


	va_start(nums, n);


	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));


		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(nums);
}
