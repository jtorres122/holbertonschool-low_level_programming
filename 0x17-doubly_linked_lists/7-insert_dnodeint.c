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
	dlistint_t *new, *temp;
	unsigned int index = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	temp = *h;
	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx > dlistint_len(*h))
		return (NULL);

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	while (index != idx)
	{
		temp = temp->next;
		index++;
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	temp->prev->next = new;
	new->prev = temp->prev;
	new->next = temp;
	temp->prev = new;

	return (new);
}
