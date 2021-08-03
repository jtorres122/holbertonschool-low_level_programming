#include "lists.h"

/**
 * add_nodeint - function
 * @head: parameter
 * @n: parameter
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointer = NULL;

	pointer = malloc(sizeof(listint_t));
		if (pointer == NULL)
			return (NULL);
	pointer->n = n;
	pointer->next = *head;

	*head = pointer;

	return (pointer);
}
