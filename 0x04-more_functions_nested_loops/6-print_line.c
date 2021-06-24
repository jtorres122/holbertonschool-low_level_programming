#include "holberton.h"

/**
 * print_line - function
 * @n: parameter
 */
void print_line(int n)
{
	char line = '_';
	int loop;

	for (loop = 1 ; loop <= n ; loop++)
	{
		_putchar(line);
	}
	_putchar('\n');
}
