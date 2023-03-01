#include "main.h"

/**
 * strcat - concatenates two strings
 * @src: the source string
 * @dest: the string destination
 * Return: a pointer to the resulting string
 */

char *strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len] = src[i];

	return (dest);
}
