#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: parameter
 * @size: parameter
 * @action: parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t idx;

	if (array == NULL || action == NULL)
		return;

	for (idx = 0 ; idx < size ; idx++)
	{
		action(array[idx]);
	}
}
