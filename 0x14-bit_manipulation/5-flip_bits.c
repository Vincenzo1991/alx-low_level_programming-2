#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: The number of bits.
 * @m: The number to flip n to.
 * Return: number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nm = n ^ m;
	unsigned long int nflip = 0;

	while (nm > 0)
	{
		nflip += (nm & 1);
		nm >>= 1;
	}

	return (nflip);
}
