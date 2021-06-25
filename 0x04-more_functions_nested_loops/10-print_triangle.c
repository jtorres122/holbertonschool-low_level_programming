#include "holberton.h"

/**
 * print_triangle - function
 * @size: parameter
 */
void print_triangle(int size)
{
	int line, row;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (line = 1 ; line <= size ; line++)
	{
		for (row = 1 ; row <= size ; row++)
		{
			if (row <= (size - line))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
