#include "holberton.h"

/**
 * _strstr - function
 * @haystack: parameter
 * @needle: parameter
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int idx, idx2;

	for (idx = 0 ; haystack[idx] != '\0' ; idx++)
	{
		for (idx2 = 0 ; needle[idx2] != '\0' ; idx2++)
		{
			if (haystack[idx] == needle[idx2])
			{
				haystack += idx;
				return (haystack);
			}
		}
	}
	return ('\0');
}
