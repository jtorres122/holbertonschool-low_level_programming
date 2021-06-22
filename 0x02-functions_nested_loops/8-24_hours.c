#include "holberton.h"

/**
 * jack_bauer - function that prints minutes of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int hstart, mstart;

	for (hstart = 00 ; hstart <= 23 ; hstart++)
	{
		for (mstart = 00 ; mstart <= 59 ; mstart++)
		{
			_putchar('0' + hstart / 10);
			_putchar('0' + hstart % 10);
			_putchar(':');
			_putchar('0' + mstart / 10);
			_putchar('0' + mstart % 10);
			_putchar('\n');
		}
	}
}
