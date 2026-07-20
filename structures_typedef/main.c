#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Buddy", 3.5, "William");

	if (my_dog != NULL)
	{
		printf("Name: %s\n", my_dog->name);
		printf("Age: %.1f\n", my_dog->age);
		printf("Owner: %s\n", my_dog->owner);
	}

	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);

	return (0);
}
