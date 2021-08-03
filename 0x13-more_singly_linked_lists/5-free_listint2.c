#include "lists.h"

/**
 * free_listint2 - function
 * @head: parameter
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		free(head);

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
