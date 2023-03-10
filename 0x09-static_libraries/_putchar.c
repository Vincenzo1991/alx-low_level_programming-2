#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char *pc = "_putchar";

	while (*pc)

	{
		_putchar(*pc);
		pc++;
	}
	_putchar(*"\n");

	return (0);
}
