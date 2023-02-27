#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * terminate null byte to the buffer pointed to by dest
 * @src: the source string
 * @dest: the string destination
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
