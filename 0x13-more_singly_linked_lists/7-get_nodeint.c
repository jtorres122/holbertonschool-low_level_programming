#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: parameter
 * @index: parameter
 * Return: the nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
