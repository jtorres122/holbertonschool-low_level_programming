#include "holberton.h"

/**
 * _strlen_recursion - function
 * @s: parameter
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int ct = 0;

	if (*s != '\0')
	{
		ct++;
		return (ct + _strlen_recursion(s + 1));
	}
	return (0);
}
