#include <stdio.h>

/**
 * main - print letters of the alphabet in lower case
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lw[26] = "abcdefghijklmnopqrstuvwxyz";
	char up[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lw[i]);
		putchar(up[i]);
	}
	putchar('\n');
	return (0);
}
