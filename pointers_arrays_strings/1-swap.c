#include <stdio.h>

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
} 

void swap_int(int *a, int *b);

int main(void)
{
int x = 10;
int y = 20;

printf("Before: x = %d, y = %d\n", x, y);

swap_int(&x, &y);

printf("After: x = %d, y = %d\n", x, y);

return (0);
}


