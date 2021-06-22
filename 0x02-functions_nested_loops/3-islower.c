#include "holberton.h"

/**
 * _islower - function checks for lowercase
 * @c: parameter allows for checks of lowercase characters
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
