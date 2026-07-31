#ifndef PRINT_ALL_H
#define PRINT_ALL_H

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
 * struct printer - matches a format character with a function
 * @symbol: format character
 * @func: function to print corresponding argument
 */
typedef struct printer
{
	char symbol;
	void (*func)(va_list *);
} printer_t;

void print_all(const char * const format, ...);

#endif
