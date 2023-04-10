#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 * Return: 0 if b is NULL or chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int num, pwr = 0;
	unsigned int convert = 0;

	if (b == "\0")
		return (0);

	while (b[num + 1])
		num++;

	while (num >= 0)
	{
		if (b[num] == '0')
		{
			num--;
			pwr++;
		}
		else if (b[num] == '1')
		{
			convert += (1 << pwr);
			num--;
			pwr++;
		}
		else
			return (0);
	}
	return (convert);


}
