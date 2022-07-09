#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int x, j;

	if (n > 0)
	{
		for (x = 0;  x < n; x++)
		{
			for (j = 0; j < x; j++)
				_putchar(' ');
			_putchar('\\');

			if (x == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}


