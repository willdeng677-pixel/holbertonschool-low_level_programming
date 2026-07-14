#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - updates the value pointed to by n to 98
 * @n: pointer to an integer
 */

void reset_to_98(int *n)
{
    *n = 98;
}

int main(void)
{
int n = 402;

printf("Before: %d\n", n);

reset_to_98(&n);

printf("After: %d\n", n);

return (0);
}
