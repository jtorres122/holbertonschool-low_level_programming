#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int n, lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdig);
	} else if (n == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, lastdig);
		}
		if (n < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
		}

	return (0);
}
