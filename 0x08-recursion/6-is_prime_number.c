#include "holberton.h"

/**
 * is_prime_number - function
 * @n: parameter
 * Return: 0
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, divisor));
	}
}
/**
 * prime_checker - function
 * @n: parameter
 * @divisor: parameter
 * Return: 0
 */
int prime_checker(int n, int divisor)
{
	if (n % divisor == 0)
	{
		return (0);
	}
	if (n % divisor > 1)
	{
		return (1);
	}
	return (prime_checker(n, divisor + 1));
}
