#include "holberton.h"

/**
 * print_alphabet_x10 - function
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int loop, lower;

	for (loop = 0 ; loop < 10 ; loop++)
	{
		for (lower = 'a' ; lower <= 'z' ; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
