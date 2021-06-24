#include "holberton.h"

/**
 * print_diagonal - function
 * @n: parameter
 */
void print_diagonal(int n)
{
	char slash = '\\', space = ' ';
	int loop, x;

	for (loop = 0 ; loop < n ; loop++)
	{
		for (x = 0 ; x < loop ; x++)
		{
			_putchar(space);
		}
		_putchar(slash);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
