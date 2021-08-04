#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: Address of a new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert, *temp;
	unsigned int counter = 1;

	if (head == NULL || *head == NULL)
		return (NULL);

	insert = malloc(sizeof(listint_t));
	if (insert == NULL)
		return (NULL);

	if (idx == 0)
	{
		insert->n = n;
		insert->next = *head;
		*head = insert;
		return (insert);
	}

	temp = *head;
	while (temp != NULL)
	{
		if (counter == idx)
		{
			insert->n = n;
			insert->next = temp->next;
			temp->next = insert;
		}
		temp = temp->next;
		counter++;
	}

	if (idx > counter)
		return (NULL);

	return (insert);
}
