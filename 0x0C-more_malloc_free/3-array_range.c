#include "holberton.h"

/**
 * array_range - function
 * @min: parameter
 * @max: parameter
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *arr, idx;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);

	for (idx = 0 ; min <= max ; idx++, min++)
		arr[idx] = min;

	return (arr);
}
