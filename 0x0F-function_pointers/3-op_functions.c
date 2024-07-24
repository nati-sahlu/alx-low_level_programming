#include "3-calc.h"


	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);


/**
 * op_add - Computes the sum of two integers.
 * @a: The first integer to be added.
 * @b: The second integer to be added.
 *
 * Description: This function takes two integers as input
 * and returns their sum.
 * It performs basic addition and is used to add two numbers together.
 *
 * Return: The result of adding `a` and `b`.
 */
	int op_add(int a, int b)
	{
		return (a + b);
	}
/**
 * op_sub - Computes the difference
 * between two integers.
 * @a: The first integer (minuend).
 * @b: The second integer (subtrahend).
 *
 * Description: This function takes two integers
 * and returns the result of subtracting
 * the second integer from the first.
 * It performs basic subtraction.
 *
 * Return: The result of subtracting `b` from `a`.
 */
	int op_sub(int a, int b)
	{
		return (a - b);
	}
/**
 * op_mul - Computes the product
 * of two integers.
 * @a: The first integer (multiplier).
 * @b: The second integer (multiplicand).
 *
 * Description: This function multiplies two integers
 * and returns their product.
 * It performs basic multiplication
 *
 * Return: The result of multiplying `a` and `b`.
 */
	int op_mul(int a, int b)
	{
		return (a * b);
	}
/**
 * op_div - Computes the quotient of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Description: This function divides the first integer by the second integer.
 * It returns the quotient of the division.
 * Note: If `b` is 0, the behavior is undefined.
 *
 * Return: The result of dividing `a` by `b`.
 */
	int op_div(int a, int b)
	{
		return (a / b);
	}
/**
 * op_mod - Computes the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Description: This function returns the remainder when `a` is divided by `b`.
 * It calculates the modulus and
 * is used to find the remainder after division.
 * Note: If `b` is 0, the behavior is undefined.
 *
 * Return: The remainder of dividing `a` by `b`.
 */
	int op_mod(int a, int b)
	{
		return (a % b);
	}
