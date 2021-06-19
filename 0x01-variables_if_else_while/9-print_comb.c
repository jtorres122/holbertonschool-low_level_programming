#include <stdio.h>

/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int start = 48;
	int end = 57;

	for (start = 48 ; start <= end ; start++)
	{
		putchar(start);

		if (start != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
