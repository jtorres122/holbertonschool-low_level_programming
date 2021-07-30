#include "lists.h"

/**
 * add_node - function
 * @head: parameter
 * @str: parameter
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *pointer = NULL;

	pointer = malloc(sizeof(list_t));
		if (pointer == NULL)
			return (NULL);
	pointer->str = strdup(str);
	pointer->len = _strlen(str);
	pointer->next = *head;

	*head = pointer;

	return (pointer);
}

/**
 * _strlen - function returns length of a string
 * @s: String inputed
 * Return: index
 */
int _strlen(const char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	return (index);
}
