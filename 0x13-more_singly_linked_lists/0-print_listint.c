#include "lists.h"

/**
 * print_listint - function
 * @h: parameter
 * Return: counter
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
