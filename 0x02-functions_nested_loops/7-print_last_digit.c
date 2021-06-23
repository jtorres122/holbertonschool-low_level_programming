#include "holberton.h"

/**
 * print_last_digit - function prints out the last digit of a number
 * @num: parameter
 * Return: ld
 */
int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0)
	{
		ld = (-1) * ld;
	}
	_putchar(ld + '0');
	return (ld);
}
