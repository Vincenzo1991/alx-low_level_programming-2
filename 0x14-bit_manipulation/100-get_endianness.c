#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int end_num = 1;
	char *endians = (char *)&end_num;

	if (*endians == 1)
		return (1);

	return (0);
}
