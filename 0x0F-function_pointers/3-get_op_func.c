#include "3-calc.h"
	#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform the
 * operation requested by the user.
 * @s: The operator passed as an argument (e.g., "+", "-", "*").
 *
 * Description: This function takes a string representing an operator
 * returns a pointer to the corresponding function that performs
 * the desired arithmetic operation.
 * If the operator is not recognized,
 * it returns NULL.
 *
 * Return: A pointer to the function corresponding to the operator given as
 * a parameter, or NULL if the operator is not found.
 */
	int (*get_op_func(char *s))(int, int)
	{
		op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL},
		};


		int i = 0;


		while (ops[i].op != NULL && *(ops[i].op) != *s)
			i++;


		return (ops[i].f);
	}
