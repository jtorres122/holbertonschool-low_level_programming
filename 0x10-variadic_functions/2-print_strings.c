#include "variadic_functions.h"

/**
 * print_strings - function
 * @separator: parameter
 * @n: parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int parse;
	char *str;
	va_list list;

	va_start(list, n);

	for (parse = 0 ; parse < n ; parse++)
	{
		str = va_arg(list, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (parse < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
