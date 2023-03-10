#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program name
 *
 * @argc: the number of arguments
 * @argv: an array of pointer for the argument
 *
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
