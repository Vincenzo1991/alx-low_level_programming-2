#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character of the given array
 * Return: NULL if size = 0, otherwise a pointer for the given array
 */

char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;

if (size == 0)
	return (NULL);

ar = malloc(sizeof(char) * size);

if (ar == NULL)
	return (NULL);

for (i = 0; i < size; i++)
	ar[i] = c;

return (ar);
}
