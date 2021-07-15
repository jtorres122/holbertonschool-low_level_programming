#include "holberton.h"
int _strlen(char *s);

/**
 * string_nconcat - function
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int lens1;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		S2 = "";

	lens1 = _strlen(s1);

	if (n < _strlen(s2))
		lens1 += n;
	else
		lens1 += _strlen(s2);

	s3 = malloc(sizeof(char) * lens1);
}

/**
 * _strlen - function
 * @s: parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int index;

	for (index = 0 ; s[index] != '\0' ; index++)
	;

	return (index);
}
