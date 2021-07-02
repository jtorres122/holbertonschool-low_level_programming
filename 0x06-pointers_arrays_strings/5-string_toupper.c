#include "holberton.h"

/**
 * string_toupper - function
 * @s: parameter
 * Return: s
 */
char *string_toupper(char *s)
{
	int upper;

	for (upper = 0 ; s[upper] != '\0' ; upper++)
	{
		if (s[upper] >= 97 && s[upper] <= 122)
		{
			s[upper] = s[upper] - 32;
		}
	}

	return (s);
}
