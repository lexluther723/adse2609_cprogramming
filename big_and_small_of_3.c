#include <stdio.h>

// main function that defines the entry point to the program
int main()
{
    // variables to be used in the program
    float num1, num2, num3, largest, smallest;

    printf("you are requred to enter three numbers of your choice.");

    // prompt the user for the first number
    printf("Enter the first number of your choice: ");
    scanf("%f", &num1);

    // prompt the user for the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // prompt the user for the third number
    printf("Enter the third number: ");
    scanf("%f", &num3);

    // calculate the largest number using ONLY comparison and ternary operators
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // calculate the smallest number using ONLY comparison and ternary operators
    smallest = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // display the results
    printf("\nThe largest number is: %.2f", largest);
    printf("\nThe smallest number is: %.2f", smallest);

    return 0;
}
