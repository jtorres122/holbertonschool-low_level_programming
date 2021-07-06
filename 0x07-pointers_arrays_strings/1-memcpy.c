#include "holberton.h"

/**
 * _memcpy - function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0 ; idx < n ; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}
