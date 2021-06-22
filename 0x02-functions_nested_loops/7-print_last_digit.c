#include "holberton.h"

/**
 * print_last_digit - function that prints last digit of an integer
 * @r: parameter
 * Return: ld
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		r = (-1) * r;
	}
	r = r % 10;
	_putchar(r + '0');
	return (r);
}
