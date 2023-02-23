#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: dimension of triangle
 * Return: 0 (Success)
 */

void print_triangle(int size)
{
	int hash, index;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (hash = 1; hash <= size; hash++)
	{
		for (index = size - hash; index > 0; index--)
			_putchar(' ');
		for (index = hash; index > 0; index--)
			_putchar('#');
		_putchar('\n');
	}
}
