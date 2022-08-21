#include "main.h"

/**
 * _strlen_recursion - functions return length of string.
 * @s: the strin to be measured.
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	
	if (*s)
	{
		len++;
	_strlen_recursion(s + 1);
	}
	return (len);
}

