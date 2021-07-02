#include "holberton.h"

/**
 * cap_string - function
 * @s: parameter
 * Return: s
 */
char *cap_string(char *s)
{
	int len, lim, flag = 1;
	char seps[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (len = 0 ; s[len] != '\0' ; len++)
	{
		if (flag == 1)
		{
			if (s[len] >= 97 && s[len] <= 122)
			{
				s[len] -= 32;
			}
			flag = 0;
		}

		for (lim = 0 ; seps[lim] != '\0' ; lim++)
		{
			if (s[len] == seps[lim])
			{
				flag = 1;
			}
		}
	}
	return (s);
}
