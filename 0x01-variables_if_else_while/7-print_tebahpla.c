#include <stdio.h>

/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int start = 122;
	int end = 97;

	for (start = 122 ; end <= start ; start--)
	{
		putchar(start);
	}

	putchar('\n');
	return (0);
}
