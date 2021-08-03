#include "lists.h"

/**
 * listint_len - function
 * @h: parameter
 * Return: counter
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
