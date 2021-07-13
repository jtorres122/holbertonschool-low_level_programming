#include "holberton.h"

/**
 * create_array - function
 * @size: parameter
 * @c: parameter
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *alloc;
	unsigned int loop;

	alloc = malloc(sizeof(char) * size);
	if (alloc == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	for (loop = 0 ;  loop < size ; loop++)
	{
		alloc[loop] = c;
	}

	return (alloc);
}
