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

	for (num = 1; num < 100; num++)
	{
		if ((num % 5 == 0) && (num % 3 == 0))
		{
			printf("Fizzbuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("Buzz\n");
	return (0);
}
