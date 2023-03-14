#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates i marking the end of the first word
 * @str: the string to locate
 *
 * Return: the index marking the end of the initial word
 */

int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * count_words - count the number of words in the string
 * @str: the string to count
 *
 * Return: the number of words counted in the string
 */

int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + len) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}

	return (words);
}

/**
 * strtow - function that splits a string into words
 * @str: the string to be split
 *
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **string;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		string[w] = malloc(sizeof(char) * (letters + 1));

		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);

			free(string);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			string[w][l] = str[i++];

		string[w][l] = '\0';
	}
	string[w] = NULL;

	return (string);
}
