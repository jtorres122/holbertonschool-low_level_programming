#include "holberton.h"

/**
 * cap_string - function
 * @s: parameter
 * Return: s
 */
char *cap_string(char *s)
{
	int len, lim, upper = 32;
	int seps[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (len = 0 ; s[len] != '\0' ; len++)
	{
		if (s[len] >= 97 && s[len] <= 122)
		{
			s[len] = s[len] - upper;
		}

		upper = 0;

		for (lim = 0 ; lim <= 12 ; lim++)
		{
			if (s[len] == seps[lim])
			{
				upper = 32;
			}
		}
	}

	return (s);
}
