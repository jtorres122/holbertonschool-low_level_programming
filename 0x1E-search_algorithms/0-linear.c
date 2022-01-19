#include "search_algos.h"

/**
 * linear_search - function
 * @array: parameter
 * @size: parameter
 * @value: parameter
 * Return: value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size ; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
