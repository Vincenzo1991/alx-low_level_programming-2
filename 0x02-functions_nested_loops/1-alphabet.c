#include "main.h"

/**
 * main - function that prints the alphabet
 * print_alphabet: in lower case
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar(*"\n");
}
