#include <stdio.h>

int main(void)
{
int choice;

printf("==========================================\n");
printf(" Welcome to Simple Calculation\n");
printf("==========================================\n");

for (;;)
{
printf("\nMenu\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("0. Quit\n");

printf("Please enter your choice of an integer from 1..4 or 0 to quit: ");

/* Checking for validity of the entry */
if (scanf("%d", &choice) != 1)
{
printf("Invalid input! Please enter an integer from 1..4 and 0 to quit.\n");
return (1);
}
if (choice == 0)
{
printf("Goodbye!\n");
break;
}
else if (choice == 1)
{
printf("You have selected addition.\n");
}
else if (choice == 2)
{
printf("You have selected Subtraction.\n");
}
else if (choice == 3)
{
printf("You have selected Multiplication.\n");
}
else if (choice == 4)
{
printf("You have selected Division.\n");
}
else 
{
printf("Invalid menu option! Please enter an integer from 1...4 or 0 to quit.\n");
}
}

return (0);
}
