#include "holberton.h"
unsigned int _strlen(char *s);

/**
 * string_nconcat - function
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1, lens2;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);

	if (n < lens2)
		lens2 -= n;

	s3 = malloc((sizeof(char) * lens1 + lens2) + 3);
	if (s3 == NULL)
		return (NULL);

	for (lens1 = 0 ; s1[lens1] != '\0' ; lens1++)
		s3[lens1] = s1[lens1];

	for (lens2 = 0 ; s2[lens2] != '\0' && lens2 < n ; lens2++, lens1++)
		s3[lens1] = s2[lens2];

	s3[lens1] = '\0';
	return (s3);
}

/**
 * _strlen - function
 * @s: parameter
 * Return: 0
 */
unsigned int _strlen(char *s)
{
	unsigned int index;

	for (index = 0 ; s[index] != '\0' ; index++)
	;

	return (index);
}
