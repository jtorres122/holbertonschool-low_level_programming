#include "holberton.h"

/**
 * print_rev - function
 * @str: parameter
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (count = count - 1; count >= 0 ; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
