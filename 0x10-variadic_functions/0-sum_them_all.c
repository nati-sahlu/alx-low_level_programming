#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Description: This function takes a variable number of arguments and returns
 * their sum. If no arguments are provided, it returns 0.
 *
 * Return: If num == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, total = 0;


	va_start(arg, n);


	for (i = 0; i < n; i++)
		total += va_arg(arg, int);


	va_end(arg);


	return (total);
}
