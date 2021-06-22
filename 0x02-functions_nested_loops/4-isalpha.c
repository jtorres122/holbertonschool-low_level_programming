#include "holberton.h"

/**
 * _isalpha - function checks for lowercase
 * @c: parameter allows for checks of lowercase characters
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
