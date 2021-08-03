#include "lists.h"

/**
 * pop_listint - function
 * @head: parameter
 * Return: The head node's data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int temp2;

	if (head == NULL || *head == NULL)
		return (0);

	temp2 = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (temp2);
}
