#include <stdio.h>

/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int loop;

	for (loop = 1 ; loop <= 99 ; loop++)
	{
		if (loop % 3 == 0 && loop % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (loop % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (loop % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", loop);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
