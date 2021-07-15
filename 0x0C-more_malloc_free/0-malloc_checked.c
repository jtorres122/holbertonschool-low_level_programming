#include "holberton.h"

/**
 * malloc_checked - function
 * @b: parameter
 * Return: s
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
