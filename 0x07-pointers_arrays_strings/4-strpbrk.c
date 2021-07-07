#include "holberton.h"

/**
 * _strpbrk - function
 * @s: parameter
 * @accept: parameter
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int idx, idx2;

	for (idx = 0 ; s[idx] != '\0' ; idx++)
	{
		for (idx2 = 0 ; accept[idx2] != '\0' ; idx2++)
		{
			if (s[idx] == accept[idx2])
			{
				s += idx;
				return (s);
			}
		}
	}

	return ('\0');
}
