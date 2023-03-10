#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: The string to return its length
 *
 * Return: The length of @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}

