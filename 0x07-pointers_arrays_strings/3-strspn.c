include "holberton.h"

/**
 * _strspn - function
 * @s: parameter
 * @accept: parameter
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int idx, idx2, matches = 0;

	for (idx = 0 ; s[idx] != '\0' ; idx++)
	{
		if (s[idx] == ' ')
		{
			break;
		}

		for (idx2 = 0 ; accept[idx2] != '\0' ; idx2++)
		{
			if (s[idx] == accept[idx2])
			{
				matches++;
			}
		}
	}
	return (matches);
}
