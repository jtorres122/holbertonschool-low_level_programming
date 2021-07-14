#include "holberton.h"

/**
 * alloc_grid - function
 * @width: parameter
 * @height: parameter
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **str;
	int idx1, idx2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(int *) * height);

	if (str == NULL)
	{
		return (NULL);
	}

	for (idx1 = 0 ; idx1 < height ; idx1++)
	{
		str[idx1] = malloc(sizeof(int) * width);

		if (str[idx1] == NULL)
		{
			for (; idx1 >= 0 ; idx1--)
			{
				free(str[idx1]);
			}

			free(str);
			return (NULL);
		}
	}

	for (idx1 = 0 ; idx1 < height ; idx1++)
	{
		for (idx2 = 0 ; idx2 < width ; idx2++)
		{
			str[idx1][idx2] = 0;
		}
	}

	return (str);
}
