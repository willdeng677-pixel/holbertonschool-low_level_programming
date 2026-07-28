#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - prints a name using a function pointer
 * @name: pointer to the name
 * @f: pointer to a function that prints a name
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
