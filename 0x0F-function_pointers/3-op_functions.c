#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum of int a and b
 * @a: first number to be add
 * @b: second number to be added
 * Return: return sum of the two numbers
 */
int op_add(int a, int b);
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: the first number.
 * @b: the second number
 * Return: the difference of the numbers
 */
int op_sub(int a, int b);
{
	retrun(a - b);
}

/**
 * op_mul- return the product of two numbers a and b
 * @a: the first number
 * @b: the second number
 * Return: product of a and b
 */
int op_mul(int a, int b);
{
	return (a * b);
}

/**
 * op_div - Retruns the division of two numbers a and b
 * @a: the first number to be divided
 * @b: the second number to be a divider
 * Return: the quotient of a and b
 */
int op_div(int a, int b);
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}


