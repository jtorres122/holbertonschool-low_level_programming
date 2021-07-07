#include "holberton.h"

/**
 * _puts_recursion - function
 * @s: parameter
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	else if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
