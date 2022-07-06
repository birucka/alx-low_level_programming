#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int num;
	int ch;

	for (num = 0; num <= 10; num++)
	{
		for (ch='a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

