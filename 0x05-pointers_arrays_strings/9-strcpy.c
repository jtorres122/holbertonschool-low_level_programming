#include "holberton.h"

/**
 * *_strcpy - function
 * @dest: parameter
 * @src: parameter
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int idx, len = 0;

	for (idx = 0 ; src[idx] != '\0' ; idx++)
	{
		len++;
	}

	for (idx = 0 ; idx <= len ; idx++)
	{
		dest[idx] = src[idx];
	}

	return (dest);
}
