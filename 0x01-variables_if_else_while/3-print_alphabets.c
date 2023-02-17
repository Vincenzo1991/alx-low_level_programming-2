#include <stdio.h>

/**
 * main - print letters of the alphabet in lower case
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
