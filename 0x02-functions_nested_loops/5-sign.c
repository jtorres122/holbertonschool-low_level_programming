#include "holberton.h"

/**
 * print_sign - function prints the sign of a number
 * @n: parameter
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(' ');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(' ');
		return (-1);
	}
}
