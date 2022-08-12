#include "0x0F-function_pointers"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: arrays having the integer
 * @size:  is the number of elements in the array
 * @int_index returns the index of the first element
 * @cmp : A pointer to the function to be used to compare values.
 * Return: return -1 no matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}

