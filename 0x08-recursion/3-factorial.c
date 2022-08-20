#include "main.h"

/**
 * factorial - function to return factorial
 * @n: number to be factored
 * Return: factorial of the given number
 */
int factorial(int n)
{
int result;


	if (n == 1)
		return (1);
	else if (n > 0)
		result = n * factorial(n - 1);
		return (result);
	else
		return (-1);
}

