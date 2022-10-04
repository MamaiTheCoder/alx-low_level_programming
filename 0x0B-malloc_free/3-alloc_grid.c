#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *
 * @width: the width of the array.
 * @height: the height of the array.
 *
 * Return: pointer to array.
 * NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **p_array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p_array = (int **)malloc(height * sizeof(int *));
	if (p_array == NULL)
	{
		free(p_array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p_array[i] = (int *)malloc(width * sizeof(int));
		if (p_array[i] == NULL)
		{
			while (i >= 0)
			{
				free(p_array[i]);
				i--;
			}
			free(p_array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p_array[i][j] = 0;
		}
	}
	return (p_array);
}
