#include "holberton.h"

/**
 * print_alphabet - function
 * Return: 0
 */
void print_alphabet(void)
{
	int lower;

	for (lower = 'a' ; lower <= 'z' ; lower++)
	{
		_putchar(lower);
		_putchar('\n');
	}

	return (0);
}
