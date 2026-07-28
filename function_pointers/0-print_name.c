#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: pointer to the name
 * @f: function pointer used to print the name
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
