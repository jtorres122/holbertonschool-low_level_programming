#include "holberton.h"

/**
 * rot13 - function
 * @s: parameter
 * Return: s
 */
char *rot13(char *s)
{
	int x, y;
	char *arr[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
					"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0 ; *(arr[0] + y) != '\0' ; y++)
		{
			if (s[x] == *(arr[0] + y))
			{
				s[x] = *(arr[1] + y);
				break;
			}
		}
	}
	return (s);
}
