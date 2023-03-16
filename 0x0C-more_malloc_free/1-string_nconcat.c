#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: the maximum number of bytes
 *
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		concat[len++] = s2[i];

	concat[len] = '\0';

	return (concat);
}
