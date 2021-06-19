#include <stdio.h>

/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int first, second;

	for (first = 0 ; first <= 99 ; first++)
	{
		for (second = 0 ; second <= 99 ; second++)
		{
			if ((first != second) && (first < second))
			{
				putchar(first / 10 + '0');
				putchar(first % 10 + '0');
				putchar(' ');
				putchar(second / 10 + '0');
				putchar(second % 10 + '0');

				if (!(first == 98 && second == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
