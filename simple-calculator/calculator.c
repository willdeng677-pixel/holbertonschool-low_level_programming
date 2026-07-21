#include <stdio.h>

int main(void)
{
int choice, check;
float num1, num2, result;

for (;;)
{
printf("\n===== SIMPLE CALCULATOR =====\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("0. Quit\n");
printf("Enter your choice: ");

check = scanf("%d", &choice);

if (check != 1)
{
printf("Invalid input! Please enter a number.\n");

while (getchar() != '\n')
;

continue;
}

if (choice == 0)
{
printf("Goodbye!\n");
break;
}

if (choice < 0 || choice > 4)
{
printf("Invalid menu choice!\n");
continue;
}

/* Get first number */
while (1)
{
printf("Enter first number: ");

check = scanf("%f", &num1);

if (check == 1)
break;

printf("Invalid input! Please enter a valid number.\n");

while (getchar() != '\n')
;
}

/* Get second number */
while (1)
{
printf("Enter second number: ");

check = scanf("%f", &num2);

if (check != 1)
{
printf("Invalid input! Please enter a valid number.\n");

while (getchar() != '\n')
;
continue;
}

if (choice == 4 && num2 == 0)
{
printf("Cannot divide by zero!\n");
continue;
}

break;
}

switch (choice)
{
case 1:
result = num1 + num2;
printf("Result = %.2f\n", result);
break;

case 2:
result = num1 - num2;
printf("Result = %.2f\n", result);
break;

case 3:
result = num1 * num2;
printf("Result = %.2f\n", result);
break;

case 4:
result = num1 / num2;
printf("Result = %.2f\n", result);
break;
}
}

return (0);
}
