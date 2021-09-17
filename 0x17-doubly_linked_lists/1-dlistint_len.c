#include "lists.h"

/**
 * print_dlistint - function
 * @h: parameter
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
