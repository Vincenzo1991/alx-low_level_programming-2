#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array to search
 * @size: the number of elements in the @array
 * @cmp: a pointer to the function to compare values
 *
 * Return: If no element matches, return -1, If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
