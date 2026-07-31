#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 */
void print_char(va_list *ap)
{
	printf("%c", va_arg(*ap, int));
}

/**
 * print_int - prints an int
 */
void print_int(va_list *ap)
{
	printf("%d", va_arg(*ap, int));
}

/**
 * print_float - prints a float
 */
void print_float(va_list *ap)
{
	printf("%f", va_arg(*ap, double));
}

/**
 * print_string - prints a string
 */
void print_string(va_list *ap)
{
	char *str;

	str = va_arg(*ap, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	va_list ap;

	printer_t p[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;

		while (p[j].symbol)
		{
			if (format[i] == p[j].symbol)
			{
				printf("%s", sep);
				p[j].func(&ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}
