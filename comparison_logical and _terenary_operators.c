#include <stdio.h>

/* This program demonstrates comparison and logical operators in C.
   It compares two integers and displays true or false for each operation.
   Comparison operators return "true" or "false".
   Logical operators also return "true" or "false".
*/

int main()
{
    int firstNum = 10;   /* value of first number */
    int secondNum = 7;   /* value of second number */

    // Display values
    printf("Value of 'firstNum' and 'secondNum' are %d and %d respectively.\n\n", firstNum, secondNum);

    // Comparison Operators
    printf("--- COMPARISON OPERATORS ---\n");
    printf(" %d equal to (==) %d ? %s",   firstNum, secondNum, (firstNum == secondNum) ? "true" : "false");

    printf(" %d not equal to (!=) %d ? %s", firstNum, secondNum, (firstNum != secondNum) ? "true" : "false");

    printf(" %d greater than (&gt;) %d ? %s",   firstNum, secondNum, (firstNum > secondNum) ? "true" : "false");

    printf(" %d less than (&lt;) %d ? %s",      firstNum, secondNum, (firstNum < secondNum) ? "true" : "false");

    printf(" %d greater than or equal to (&gt;=) %d ? %s",
           firstNum, secondNum, (firstNum >= secondNum) ? "true" : "false");
    printf(" %d less than or equal to (&lt;=) %d ? %s",
           firstNum, secondNum, (firstNum <= secondNum) ? "true" : "false");

    // Logical Operators
    printf("\n--- LOGICAL OPERATORS ---\n");

    printf("\n(firstNum > secondNum) && (firstNum > 0) = %s",((firstNum > secondNum) && (firstNum > 0)) ? "true" : "false");

    printf("\n(firstNum > secondNum) || (firstNum > 0) = %s",((firstNum > secondNum) || (firstNum > 0)) ? "true" : "false");

    printf(" !(firstNum < secondNum) = %s",!(firstNum < secondNum) ? "true" : "false");

    return 0;
}
