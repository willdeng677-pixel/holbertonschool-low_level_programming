#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
struct dog my_dog;

my_dog.name = "Buddy";
my_dog.age = 3.5;
my_dog.owner = "William";

printf("Name: %s\n", my_dog.name);
printf("Age: %.1f\n", my_dog.age);
printf("Owner: %s\n", my_dog.owner);

return (0);
}
