#include "function_pointers.h"

/**
 * int_index - function
 * @array: parameter
 * @size: parameter
 * @cmp: parameter
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx, comp;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (idx = 0 ; idx < size ; idx++)
	{
		comp = cmp(array[idx]);
		if (comp)
			return (idx);
	}
	return (-1);
}
