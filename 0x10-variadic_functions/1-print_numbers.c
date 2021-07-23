#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: parameter
 * @n: parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int parse, num;
	va_list list;

	va_start(list, n);

	for (parse = 0 ; parse < n ; parse++)
	{
		num = va_arg(list, int);
		printf("%i", num);

		if (parse != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
