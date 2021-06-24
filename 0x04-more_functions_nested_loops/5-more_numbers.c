#include "holberton.h"

/**
 * more_numbers - function
 */
void more_numbers(void)
{
	int loop, num1;

	for (loop = 0 ; loop < 10 ; loop++)
	{
		for (num1 = 0 ; num1 <= 14 ; num1++)
		{
			if (num1 >= 10)
			{
				_putchar(num1 / 10 + '0');
			}
			_putchar(num1 % 10 + '0');
		}
		_putchar('\n');
	}
}
