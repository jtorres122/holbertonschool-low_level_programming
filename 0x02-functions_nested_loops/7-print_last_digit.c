#include "holberton.h"

/**
 * print_last_digit - function that prints last digit of an integer
 * @r: parameter
 * Return: ld
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
	{
		r = (-1) * r;
	}
	_putchar('0' + r);
	return (r);
}
