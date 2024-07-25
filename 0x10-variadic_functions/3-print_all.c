#include "variadic_functions.h"
	#include <stdarg.h>
	#include <stdio.h>
/**
 * print_all - Prints various types of arguments.
 * @format: A string of format specifiers indicating the type of arguments.
 *          Supported specifiers are:
 *          'c' - char
 *          'i' - int
 *          'f' - float
 *          's' - string
 *
 * Description: This function takes a format string and a variable number of
 * arguments.
 * prints each argument according to its format specifier.
 * If the format specifier is not recognized, it is ignored.If  string argument
 * is NULL, (nil) is printed instead. Each argument is separated by a comma and
 * a space.
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);
	if (format)
		{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
				j++;
				continue;
			}
		sep = ", ";
		j++;
	}
}
printf("\n");
va_end(list);
}
