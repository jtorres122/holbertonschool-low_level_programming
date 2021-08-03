#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: parameter
 * @n: parameter
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *parse, *pointer;

	parse = *head;
	while (parse && parse->next != NULL)
		parse = parse->next;

	pointer = malloc(sizeof(listint_t));
		if (pointer == NULL)
			return (NULL);
	pointer->n = n;
	pointer->next = NULL;

	if (*head == NULL)
		*head = pointer;
	else
		parse->next = pointer;

	return (pointer);
}
