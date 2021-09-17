#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert, *temp;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);

	insert = malloc(sizeof(dlistint_t));
	if (insert == NULL)
		return (NULL);

	if (idx == 0)
	{
		insert->n = n;
		insert->next = *h;
		*h = insert;
		return (insert);
	}

	temp = *h;

	while (counter < (idx - 1) && temp != NULL)
	{
		temp = temp->next;
		counter++;
	}

	if (temp == NULL)
		return (NULL);

	insert->n = n;
	insert->next = temp->next;
	temp->next = insert;

	return (insert);
}
