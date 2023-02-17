#include <stdio.h>

/**
 * main - print letters of the alphabet in lower case except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		if (i != 5 && i != 17)
		{
			putchar(alp[i]);
		}
	}

	putchar('\n');
	return (0);
}
