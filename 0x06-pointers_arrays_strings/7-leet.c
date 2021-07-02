#include "holberton.h"

/**
 * leet - function
 * @s: parameter
 * Return: s
 */
char *leet(char *s)
{
	int x, y;
	char *arr[] = {"aAeEoOtTlL", "43071"};

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0 ; *(arr[0] + y) != '\0' ; y++)
		{
			if (s[x] == *(arr[0] + y))
			{
				s[x] = *(arr[1] + (y / 2));
			}
		}
	}
	return (s);
}
