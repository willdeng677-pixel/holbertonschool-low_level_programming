#include "print_all.h"

int main(void)
{
	print_all("ceis", 'H', 1024, 3.14, "Holberton");

	print_all("cifs", 'A', 123, 45.6, "Hello");

	print_all("s", NULL);

	print_all("ccccc", 'A', 'B', 'C', 'D', 'E');

	print_all("iiiii", 1, 2, 3, 4, 5);

	print_all("ffff", 1.1, 2.2, 3.3, 4.4);

	print_all("ssss", "one", "two", NULL, "four");

	print_all("xyz", 10, 20, 30);

	print_all(NULL);

	return (0);
}
