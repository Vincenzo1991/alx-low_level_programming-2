#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 *
 * Return: 0 if b is NULL or chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	unsigned int pwr = 1;
	int lng;

	if (b == "\0")
		return (0);

	for (lng = 0; b[lng];)
		lng++;

	for (lng -= 1; lng >= 0; lng--)
	{
		if (b[lng] != '0' && b[lng] != '1')
			return (0);

		convert += (b[lng] - '0') * pwr;
		pwr *= 2;
	}

	return (convert);
}
