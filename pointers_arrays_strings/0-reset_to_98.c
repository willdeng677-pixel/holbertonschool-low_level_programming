#include <stdio.h>
#include "main.h"

int main(void)
{
int n;
n = 402;

printf("Before: %d\n", n);

reset_to_98(&n);

printf("After: %d\n", n);

return (0);
}
