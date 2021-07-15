#include "holberton.h"

/**
 * _calloc - function
 * @nmemb: parameter
 * @size: parameter
 * Return: s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int idx;
	char *s;

	if (nmemb == 0 && size == 0)
		return (NULL);

	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);

	for (idx = 0 ; idx < (size * nmemb) ; idx++)
	{
		s[idx] = 0;
	}

	return (s);
}
