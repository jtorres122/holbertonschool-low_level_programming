#include "holberton.h"

/**
 * rev_string - function
 * @s: parameter
 */
void rev_string(char *s)
{
	int length, begin;
	char buf;

	for (length = 0 ; s[length] != '\0' ; length++)
	{
		continue;
	}

	for (begin = 0, length-- ; begin <= length ; begin++, length--)
	{
		buf = s[begin];
		s[begin] = s[length];
		s[length] = buf;
	}
}
