#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function
 * @a: parameter
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int ct;

	for (ct = 0 ; ct < n ; ct++)
	{
		printf("%d", a[ct]);
		if (ct < n - 1)
		{
			printf(", ");
		}
	}

	putchar('\n');
}
