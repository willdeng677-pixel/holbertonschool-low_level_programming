#include <stdio.h>
#include "store.h"

int main(void)
{
	store_t store;

	store_init(&store);

	printf("Store initialized successfully.\n");

	store_destroy(&store);

	return (0);
}
