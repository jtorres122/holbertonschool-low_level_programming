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
				break;

			case 'i':
				printf("%s%i", comma, va_arg(list, int));
				break;

			case 'f':
				printf("%s%f", comma, va_arg(list, double));
				break;

			case 's':
				str = va_arg(list, char *);
				if (str != NULL)
					printf("%s%s", comma, str);
				else
					printf("%s(nil)", comma);
				break;
		}
		comma = ", ";
		parse++;
	}
	printf("\n");

	va_end(list);
}
