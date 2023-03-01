#include "main.h"

/**
 * strcat - concatenates two strings
 * @src: the source string
 * @dest: the string destination
 * Return: a pointer to the resulting string
 */

char *strcat(char *dest, char *src)
{
	int len, j;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
