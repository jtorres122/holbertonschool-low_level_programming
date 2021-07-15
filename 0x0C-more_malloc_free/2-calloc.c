#include "holberton.h"

/**
 * _calloc - function
 * @nmemb: parameter
 * @size: parameter
 * Return: s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s = 0;

	if (nmemb == 0 && size == 0)
		return (NULL);

	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);

	return (s);
}
