#include "lists.h"

/**
 * sum_dlistint - function
 * @head: parameter
 * Return: the sum of all the data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
