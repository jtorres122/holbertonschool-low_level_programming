#include "holberton.h"

/**
 * str_concat - function
 * @s1: parameter
 * @s2: parameter
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, len3, len4;
	int sum;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0 ; s1[len1] != '\0' ; len1++)
	;

	for (len2 = 0 ; s2[len2] != '\0' ; len2++)
	;

	sum = len1 + len2;

	s3 = malloc(sizeof(char) * sum + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (len3 = 0 ; s1[len3] != '\0' ; len3++)
	{
		s3[len3] = s1[len3];
	}

	for (len4 = 0 ; s2[len4] != '\0' ; len3++, len4++)
	{
		s3[len3] = s2[len4];
	}

	return (s3);
}
