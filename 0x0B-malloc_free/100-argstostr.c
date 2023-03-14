#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments in the program
 * @av: the array pointers to the argument
 *
 * Return: NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byt, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byt = 0; av[arg][byt]; byt++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byt = 0; av[arg][byt]; byt++)
			str[i++] = av[arg][byt];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
