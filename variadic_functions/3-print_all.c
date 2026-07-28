#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *str;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c')
			printf("%s%c", separator, va_arg(args, int));

		if (format[i] == 'i')
			printf("%s%d", separator, va_arg(args, int));

		if (format[i] == 'f')
			printf("%s%f", separator, va_arg(args, double));

		if (format[i] == 's')
		{
			str = va_arg(args, char *);

			printf("%s%s", separator,
				str == NULL ? "(nil)" : str);
		}

		separator = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}
