#include <stdio.h>
#include "main.h"

/**
 * main - fizz buzz tes
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 5 == 0)
			printf("Fizzbuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
