#include "holberton.h"

/**
 * _strcat - function
 * @dest: parameter
 * @src: parameter
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int idx, idx2;

	for (idx = 0 ; dest[idx] != '\0' ; idx++)
	;

	for (idx2 = 0 ; src[idx2] != '\0' ; idx2++, idx++)
	{
		dest[idx] = src[idx2];
	}
	return (dest);
}
