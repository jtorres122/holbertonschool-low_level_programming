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

	insert = malloc(sizeof(dlistint_t));
	if (insert == NULL)
		return (NULL);

	temp = *h;

	if (idx == 0)
	{
		insert->n = n;
		insert->prev = NULL;
		insert->next = *h;
		*h = insert;
		return (insert);
	}
	else
	{
		while (counter < (idx - 1) && temp != NULL)
		{
			temp = temp->next;
			counter++;
		}
		insert->n = n;
		insert->next = temp->next;
		insert->prev = temp;
		temp->next = insert;
	}

	return (insert);
}
