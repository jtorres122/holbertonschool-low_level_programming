#include "holberton.h"

/**
 * _strdup -function
 * @str: parameter
 * Return: newstr
 */
char *_strdup(char *str)
{
	unsigned int len1, len2;
	char *newstr;

	for (len1 = 0 ; str[len1] != '\0' ; len1++)
	;

	newstr = malloc(sizeof(char) * len1);

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (len2 = 0 ; len2 <= len1 ; len2++)
	{
		newstr[len2] = str[len2];
	}

	return (newstr);
}
