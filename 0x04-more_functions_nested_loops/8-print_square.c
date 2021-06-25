#include "holberton.h"

/**
 * print_square - function
 * @size: parameter
 */
void print_square(int size)
{
	int line, row;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (line = 0 ; line < size ; line++)
	{
		for (row = 0 ; row < size ; row++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
