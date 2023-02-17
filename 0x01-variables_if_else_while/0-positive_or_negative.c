#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if a variable is positive, negative or integar
 *
 * Return: 9 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
