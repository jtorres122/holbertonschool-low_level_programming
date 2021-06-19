#include <stdio.h>

/**
 * main - function
 * Return: 0
 */
int main(void)
{
	char upper, lower;

	for (lower = '0' ; lower <= '9' ; lower++)
	{
		putchar(lower);
	}
	for (upper = 'a' ; upper <= 'f' ; upper++)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
