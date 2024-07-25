#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings with a separator, followed by a newline.
 * @separator: The string to be printed between strings.
 * If NULL, no separator is printed.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * If a string is NULL, (nil) is printed instead.
 *
 * Description: This function takes a variable number of strings and prints
 * them, separated by the specified separator string.
 * If the separator is NULL,
 * it is not printed between strings.
 * If any string argument is NULL, the function
 * prints (nil) in its place. The output ends with a newline.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;


	va_start(strings, n);


	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);


		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);


		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(strings);
}
