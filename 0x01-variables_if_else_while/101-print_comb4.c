#include <stdio.h>

/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7 ; a++)
	{
		for (b = 1; b <= 8 ; b++)
		{
			for (c = 2 ; c <= 9 ; c++)
			{
				if (a < b && b < c)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);
					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
