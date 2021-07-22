#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int parse;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (parse = 0 ; parse < n ; parse++)
		sum += va_arg(list, unsigned int);

	va_end(list);

	return (sum);
}
