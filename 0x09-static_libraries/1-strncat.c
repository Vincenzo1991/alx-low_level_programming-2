#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string to be appended on
 * @src: the source string to be concatenated
 * @n: the number of bytes from src
 *
 * Return: a pointer to the result @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
