#include "main.h"

/**
 * _puts_recursion- functions that prints a string
 * @s: the strings that will be printed
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
else
_putchar(*s);
_puts_recursion(s + 1);
}

