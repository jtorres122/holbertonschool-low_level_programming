#include "holberton.h"

/**
 * _isupper - function
 * @c: parameter
 * Return: 1, 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
