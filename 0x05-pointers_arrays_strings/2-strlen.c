#include "holberton.h"

/**
 * _strlen - function
 * @s: parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	return (index);
}
