#include <stdio.h>

/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 8 ; a++)
	{
		for (b = 1; b <= 9 ; b++)
		{
			if (a < b)
			{
				putchar(a + 48);
				putchar(b + 48);
				if (!(a == 8 && b == 9))
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
