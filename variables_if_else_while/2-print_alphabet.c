#include <stdio.h>
/**
*code that print alphabet in lowercase
*return 0 if the code run successful
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	
	putchar('c\n');

	return (0); 
}
