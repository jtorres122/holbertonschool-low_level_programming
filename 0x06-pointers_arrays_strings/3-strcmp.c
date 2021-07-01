#include "holberton.h"

/**
 * _strcmp - function
 * @s1: parameter
 * @s2: parameter
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int itr;

	for (itr = 0 ; s1[itr] != '\0' && s2[itr] != '\0' ; itr++)
	{
		if (s1[itr] != s2[itr])
		{
			return (s1[itr] - s2[itr]);
		}
	}

	return (0);
}
