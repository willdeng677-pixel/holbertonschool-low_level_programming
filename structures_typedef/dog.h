#include <stdio.h>

/**
 * struct dog - Defines a dog
 * @name: Pointer to the dog's name
 * @age: The dog's age
 * @owner: Pointer to the owner's name
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * main - Entry point
 *
 * Return: Always 0
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
