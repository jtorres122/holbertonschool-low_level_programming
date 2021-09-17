#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: parameter
 * @n: parameter
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = *head;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;			/* Line 18 & 19 creates the node */
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;		/* If the list is empty, make it the singular node */
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;		/* If it's not empty, go through until the end */
	}
	new->prev = temp;			/* Link the list doubly with the added node at the end */
	temp->next = new;

	return (new);
}
