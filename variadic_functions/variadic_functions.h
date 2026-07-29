#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 *
 * Return: sum of all arguments, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct printer - matches a format specifier to a print function
 * @type: format character
 * @print: function to print the argument
 */
typedef struct printer
{
	char type;
	void (*print)(va_list *, char *);
} printer_t;

void print_all(const char * const format, ...);

#endif
