#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: the width of the integer array
 * @height: the height of the integer array
 *
 * Return: NULL if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **ard;
	int hgt_i, wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	ard = malloc(sizeof(int *) * height);

	if (ard == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		ard[hgt_i] = malloc(sizeof(int) * width);

		if (ard[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(ard[hgt_i]);

			free(ard);
			return (NULL);
		}
	}

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			ard[hgt_i][wid_i] = 0;
	}

	return (ard);
}

