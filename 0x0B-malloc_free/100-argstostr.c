#include "holberton.h"

/**
 * argstostr - function
 * @ac: parameter
 * @av: parameter
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int idx1, idx2, idx3 = 0, size = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (idx1 = 0 ; av[idx1] != NULL ; idx1++)
	{
		for (idx2 = 0 ; av[idx1][idx2] != '\0' ; idx2++)
		{
			size++;
		}
		size++;
	}

	s = malloc((sizeof(char) * size) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (idx1 = 0 ; av[idx1] != NULL ; idx1++)
	{
		for (idx2 = 0 ; av[idx1][idx2] != '\0' ; idx2++, idx3++)
		{
			s[idx3] = av[idx1][idx2];
		}
		s[idx3] = '\n';
		idx3++;
	}

	return (s);
}
