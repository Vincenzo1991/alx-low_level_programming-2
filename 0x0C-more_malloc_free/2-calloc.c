#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: the size of the array
 *
 * Return: If @nmemb or size is 0, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	filler = memory;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (memory);
}
