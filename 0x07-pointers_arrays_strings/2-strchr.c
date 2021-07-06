#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - function
 * @s: parameter
 * @c: parameter
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int idx;

	for (idx = 0 ; s[idx] != '\0' ; idx++)
	{
		if (s[idx] == c)
		{
			return (s + idx);
		}
	}

	if ('\0' == c)
	{
		return (s + idx);
	}

	return (NULL);
}
