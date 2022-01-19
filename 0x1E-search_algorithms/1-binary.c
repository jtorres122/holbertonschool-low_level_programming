#include "search_algos.h"

/**
 * binary_search - function
 * @array: parameter
 * @size: parameter
 * @value: parameter
 * Return: value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t idx1, idx2;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx2 = left ; idx2 <= right  ; idx2++)
		{
			if (idx2 == right)
				printf("%d", array[idx2]);
			else
				printf("%d, ", array[idx2]);
		}
		printf("\n");
		idx1 = (left + right) / 2;
		if (array[idx1] < value)
			left = idx1 + 1;
		else if (array[idx1] > value)
			right = idx1 - 1;
		else
			return (value);
	}
	return (-1);
}
