#include "holberton.h"

/**
 * puts_half - function
 * @str: parameter
 */
void puts_half(char *str)
{
	int idx, n, len = 0;

	for (idx = 0 ; str[idx] != '\0' ; idx++, len++)
	;

	if (len % 2 == 0)
	{
		n = len / 2;
	}else
	{
		n = (len - 1)/2 + 1;
	}

	for (idx = n ; idx < len ; idx++)
	{
		_putchar(str[idx]);
	}

	_putchar('\n');
}
