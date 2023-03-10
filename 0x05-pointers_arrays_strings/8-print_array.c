#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * followed by a new line
 * @a: an array of integers
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
