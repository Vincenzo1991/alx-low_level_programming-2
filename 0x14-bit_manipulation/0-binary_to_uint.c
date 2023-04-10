#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: 0 if b is NULL |contains chars not 0 or 1. Else converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	unsigned int multi = 1;
	int lng;

	if (*b == '\0')
		return (0);

	for (lng = 0; b[lng];)
		lng++;

	for (lng -= 1; lng >= 0; lng--)
	{
		if (b[lng] != '0' && b[lng] != '1')
			return (0);

		convert += (b[lng] - '0') * multi;
		multi *= 2;
	}

	return (convert);
}
