#include "holberton.h"

/**
 * puts2 - function
 * @str: parameter
 */
void puts2(char *str)
{
	int length;

	for (length = 0 ; str[length] != '\0' ; length++)
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
	}

	_putchar('\n');
}
