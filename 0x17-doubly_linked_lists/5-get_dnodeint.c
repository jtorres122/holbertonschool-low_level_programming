#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: parameter
 * @index: parameter
 * Return: nth node or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}

	return (head);
}
