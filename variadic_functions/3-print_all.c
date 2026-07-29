#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a character
 */
void print_char(va_list *args, char *separator)
{
	printf("%s%c", separator, va_arg(*args, int));
}

/**
 * print_int - prints an integer
 */
void print_int(va_list *args, char *separator)
{
	printf("%s%d", separator, va_arg(*args, int));
}

/**
 * print_float - prints a float
 */
void print_float(va_list *args, char *separator)
{
	printf("%s%f", separator, va_arg(*args, double));
}

/**
 * print_string - prints a string
 */
void print_string(va_list *args, char *separator)
{
	char *str;

	str = va_arg(*args, char *);

	if (!str)
		str = "(nil)";

	printf("%s%s", separator, str);
}
