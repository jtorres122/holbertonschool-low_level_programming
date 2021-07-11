#include "holberton.h"

/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int loop1, intcheck;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (loop1 = 1 ; loop1 < argc ; loop1++)
	{
		for (intcheck = 0 ; argv[loop1][intcheck] != '\0' ; intcheck++)
		{
			if (!isdigit(argv[loop1][intcheck]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[loop1]);
	}
	printf("%i\n", sum);
	return (0);
}
