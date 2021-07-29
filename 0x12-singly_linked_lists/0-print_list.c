#include "lists.h"

/**
 * print_list - function
 * @h: parameter
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		counter++;
		h = h->next;
	}

	return (counter);
}
