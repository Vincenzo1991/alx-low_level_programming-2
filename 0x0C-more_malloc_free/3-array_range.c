#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the first value of the array
 * @max: the last value of the array
 * Return: If min > max, return NULL
 */

int *array_range(int min, int max)
{
	int *ar, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ar = malloc(sizeof(int) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = min++;

	return (ar);
}
