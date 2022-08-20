#include "main.h"

/**
 * factorial - function to return factorial
 * @n: number to be factored
 * Return: factorial of the given number
 */
int factorial(int n)
{
int fact = n;
if (n < 0)
	return (-1);

else if (n >= 0 && n <= 1)
	return (1);

fact *= factorial(n - 1);

return (fact);
}

