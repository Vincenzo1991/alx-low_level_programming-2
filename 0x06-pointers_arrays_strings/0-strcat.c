#include "main.h"

/**
 * strcat - concatenates two strings
 * @src: the source string
 * @dest: the string destination
 *
 * Return: a pointer to the resulting string @dest
 */

char *strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] != '\0'; index++)
		dest[dest_len++] = src[index];
	dest[dest_len] = '\0';

	return (dest);
}
