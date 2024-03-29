#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 * Return: If the number has a natural square root - the square root.
 * If the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion- function that returns the square root of natural number
 * @n: number to be square rooted
 * Return: return the square root value of a number
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	return (find_sqrt(n, root));
}

