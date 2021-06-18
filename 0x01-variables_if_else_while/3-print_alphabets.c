#include <stdio.h>

/**
 * main - function
 * Return: 0
 */
int main(void)
{
	char upper, lower;

	for (lower = 'a' ; lower <= 'z' ; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A' ; upper <= 'Z' ; upper++)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
