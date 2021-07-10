#include "holberton.h"
#include <stdio.h>

/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int loop;

	for (loop = 0 ; loop < argc ; loop++)
	{
		printf("%s\n", argv[loop]);
	}
	return (0);
}
