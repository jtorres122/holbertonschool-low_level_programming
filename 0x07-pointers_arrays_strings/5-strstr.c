#include "holberton.h"

/**
 * _strstr - function
 * @haystack: parameter
 * @needle: parameter
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int idx1, mover, idx2 = 0;
	
	for (idx1 = 0 ; haystack[idx1] != '\0' ; idx1++)
	{
		mover = idx1;
		while (haystack[idx1] == needle[idx2])
		{
			if (needle[idx2 + 1] == '\0')
			{
				return (haystack += (mover - 1));
			}
			idx1++;
			idx2++;
		}
		idx1 = mover;
	}
	return (NULL);
}
