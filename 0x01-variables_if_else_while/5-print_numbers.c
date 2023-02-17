#include <stdio.h>

/**
 * main - print all single digits numbers of base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
