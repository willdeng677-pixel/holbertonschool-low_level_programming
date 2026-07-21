#include <stdio.h>

int main(void)
{
int choice;
float num1, num2, result;

do
{
printf("\n===== Simple Calculator =====\n");
printf("1. Divide two numbers\n");
printf("2. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice)
{
case 1:
printf("Enter the first number: ");
scanf("%f", &num1);

do
{
printf("Enter the second number: ");
scanf("%f", &num2);

if (num2 == 0)
{
printf("Invalid! Cannot divide by zero.\n");
printf("Please enter a non-zero number.\n");
}

} while (num2 == 0);

result = num1 / num2;

printf("Result = %.2f / %.2f = %.2f\n",
num1, num2, result);
break;

case 2:
printf("Goodbye!\n");
break;

default:
printf("Invalid menu choice. Please try again.\n");
}

} while (choice != 2);

return (0);
}
