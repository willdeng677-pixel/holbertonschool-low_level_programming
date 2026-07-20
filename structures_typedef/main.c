#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Buddy", 3.5, "William");

	printf("Ok\n");

	return (0);
}
