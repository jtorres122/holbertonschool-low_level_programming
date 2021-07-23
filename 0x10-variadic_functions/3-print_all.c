#include "variadic_functions.h"

/**
 * print_all - function
 * @format: parameter
 */
void print_all(const char * const format, ...)
{
	int parse = 0;
	char *str, *comma = "";
	va_list list;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(list, format);
	while (format[parse] != '\0')
	{
		switch (format[parse])
		{
			case 'c':
				printf("%s%c", comma, va_arg(list, int));
				comma = ", ";
				break;
			case 'i':
				printf("%s%i", comma, va_arg(list, int));
				comma = ", ";
				break;
			case 'f':
				printf("%s%f", comma, va_arg(list, double));
				comma = ", ";
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", comma, str);
				comma = ", ";
				break;
		}
		parse++;
	}
	printf("\n");
	va_end(list);
}
