#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * terminate null byte to the buffer pointed to by dest
 * @src: the source string
 * @dest: the string destination
 *
 * Return: the pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
