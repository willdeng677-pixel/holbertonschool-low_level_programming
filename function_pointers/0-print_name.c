#include "function_pointers.h"

#include <stdio.h>

void print_normal(char *name)
{
    printf("%s\n", name);
}

void print_upper(char *name)
{
    while (*name)
    {
        putchar(*name >= 'a' && *name <= 'z' ? *name - 32 : *name);
        name++;
    }
    putchar('\n');
}

int main(void)
{
    print_name("William", print_normal);
    print_name("William", print_upper);

    return (0);
}
