#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a character
 * @args: argument list
 *
 * Return: Nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - prints an integer
 * @args: argument list
 *
 * Return: Nothing
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: argument list
 *
 * Return: Nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: argument list
 *
 * Return: Nothing
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	
	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c')
		print_char(args);

		if (format[i] == 'i')
		print_integer(args);

		if (format[i] == 'f')
		print_float(args);

		if (format[i] == 's')
		print_string(args);

		printf("%s", separator);
		separator = ", ";

		i++;
	}

	va_end(args);

	printf("\n");
}
