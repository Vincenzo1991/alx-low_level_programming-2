#include "function_pointers.h"

/**
 * array_iterator - it executes a function given as a parameter
 * on each element of an array.
 * @size: the sise of the array
 * @action: a pointer to the function
 * @array: the array to iterate
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
