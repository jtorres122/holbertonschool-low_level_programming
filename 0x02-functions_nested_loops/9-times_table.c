#include "holberton.h"
#include <stdio.h>

/**
 * times_table - function prints the 9 times table
 */
void times_table(void)
{
	int num1, product, num2 = 0;

	for (num1 = 0 ; num1 < 10 ; num1++)
	{
		_putchar('0');

		for (num2 = 1 ; num2 < 10 ; num2++)
		{
			_putchar(',');
			_putchar(' ');
			product = num1 * num2;
			if (product >= 10)
			{
				_putchar(product / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
