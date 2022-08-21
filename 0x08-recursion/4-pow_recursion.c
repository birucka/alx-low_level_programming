#include "main.h"

/**
 * _pow_recursion - function return the value of x power of y.
 * @x: the number to be raised
 * @y: the number power
 * Return: return the value of x the power of y.
 */
int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	power * = _pow_recursion(x, y - 1);

	return (power);
}

