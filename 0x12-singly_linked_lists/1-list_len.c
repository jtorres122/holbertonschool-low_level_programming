#include "lists.h"

/**
 * list_len - function
 * @h: parameter
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
