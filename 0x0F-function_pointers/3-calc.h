#ifndef CALC_H
#define CALC_H

/**
 * struct op - A structure that defines an operator and
 * its function.
 * @op: A string representing the operator (e.g., "+", "-", "*", "/", "%").
 * @f: A function pointer to the function that performs
 * the corresponding operation.
 *
 * Description: This structure maps an operator to a function that performs
 * the arithmetic operation associated with that operator.
 */
typedef struct op
	{
		char *op;
		int (*f)(int a, int b);
	} op_t;


	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);
	int (*get_op_func(char *s))(int, int);

#endif
