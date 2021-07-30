#include "lists.h"

/**
 * add_node_end - function
 * @head: parameter
 * @str: parameter
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *parse, *ptr;

	parse = *head;
	while (parse && parse->next != NULL)
		parse = parse->next;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->len = _strlen(str);
	ptr->str = strdup(str);
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
		parse->next = ptr;

	return (ptr);
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
