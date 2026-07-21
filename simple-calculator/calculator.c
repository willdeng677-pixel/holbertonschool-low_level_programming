#include <stdio.h>

int main(void)
{
int choice;
int A;
int B;
int result;

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
if (B == 0)
{
printf("Invalid! Cannot divide by zero.\n");
printf("Please try again.\n\n");
}
printf("You have selected Division.\n");
}
else 
{
printf("Invalid menu option! Please enter an integer from 1...4 or 0 to quit.\n");
}
}
/*============Addition=======================*/
/* ask user to input the value of A */
printf("Please enter an integer number value of A:\n");
scanf("%d", &A);

/* ask user to input the value of B */
printf("Please enter an integer number value of B:\n");
scanf("%d", &B);

/* Adding up A and B values*/
result = A+B;

/*Printing the added up A value and B value*/
printf("#########################################\n");
printf("The sum of %d and %d is %d:\n", A, B, result);
printf("#########################################\n");
/*=============Subtraction=================*/
/* ask user to input the value of A */
printf("Please enter an integer number value of A:\n");
scanf("%d", &A);

/* ask user to input the value of B */
printf("Please enter an integer number value of B:\n");
scanf("%d", &B);

/* Subtracting A and B values*/
result = A-B;

/*Printing the result of subtracting A value from B value*/
printf("#########################################\n");
printf("The Subtraction of %d and %d is %d:\n", A, B, result);
printf("#########################################\n");

/*============Multiplication=======================*/
/* ask user to input the value of A */
printf("Please enter an integer number value of A:\n");
scanf("%d", &A);

/* ask user to input the value of B */
printf("Please enter an integer number value of B:\n");
scanf("%d", &B);

/* Multiplying A and B values*/
result = A * B;

/*Printing the Multiplication A value and B value*/
printf("#########################################\n");
printf("The Multiplication of %d and %d is %d:\n", A, B, result);
printf("#########################################\n");

/*============Division=======================*/
/* ask user to input the value of A */
printf("Please enter an integer number value of A:\n");
scanf("%d", &A);

/* ask user to input the value of B */
printf("Please enter an integer number value of B:\n");
scanf("%d", &B);

/* Multiplying A and B values*/
result = A / B;

/*Printing the division A value and B value*/
printf("#########################################\n");
printf("The Division of %d and %d is %d:\n", A, B, result);
printf("#########################################\n");

return (0);
}
