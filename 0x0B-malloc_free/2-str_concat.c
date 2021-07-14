#include "holberton.h"
int _strlen(char *s);
int concater(char *str, char *ptr, int idx);

/**
 * str_concat - function
 * @s1: parameter
 * @s2: parameter
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int size, idx;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = _strlen(s1) + _strlen(s2);

	s3 = malloc((sizeof(char) * size) + 1);
	if (s3 == NULL)
		return (NULL);

	idx = concater(s1, s3, 0);
	idx = concater(s2, s3, idx);

	return (s3);
}

/**
 * concater - function
 * @str: parameter
 * @ptr: parameter
 * @idx: parameter
 * Return: idx
 */
int concater(char *str, char *ptr, int idx)
{
	int index;

	for (index = 0 ; str[index] != '\0' ; index++, idx++)
		ptr[idx] = str[index];

	return (idx);
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
