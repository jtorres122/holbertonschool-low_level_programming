#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - function that prints string of numbers
 * @n: variable of printed numbers
 */
void print_to_98(int n)
{
	int temp = n;

	if (n > 98)
	{
		for (; n > 98 ; n--)
		{
			if (temp != n)
			{
				printf(", ");
			}

			printf("%d", n);
		}
	}
	else
	{
		for (; n <= 98 ; n++)
		{
			if (temp != n)
			{
				printf(", ");
			}

			printf("%d", n);
		}
	}
	printf("\n");
}
