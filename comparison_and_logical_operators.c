#include <stdio.h>

int main()
{
    int firstNum = 10;
    int secondNum = 7;

    // Display values
    printf("Value of 'firstNum' and 'secondNum' are %d and %d respectively.\n\n", firstNum, secondNum);

    // Comparison Operators
    printf("--- COMPARISON OPERATORS ---\n");
    printf("1) %d equal to (==) %d ? %d\n",   firstNum, secondNum, firstNum == secondNum);
    printf("2) %d not equal to (!=) %d ? %d\n", firstNum, secondNum, firstNum != secondNum);
    printf("3) %d greater than (&gt;) %d ? %d\n",   firstNum, secondNum, firstNum > secondNum);
    printf("4) %d less than (&lt;) %d ? %d\n",      firstNum, secondNum, firstNum < secondNum);
    printf("5) %d greater than or equal to (&gt;=) %d ? %d\n",
           firstNum, secondNum, firstNum >= secondNum);
    printf("6) %d less than or equal to (&lt;=) %d ? %d\n",
           firstNum, secondNum, firstNum <= secondNum);

    // Logical Operators
    printf("\n--- LOGICAL OPERATORS ---\n");
    printf("7) (firstNum > secondNum) && (firstNum > 0) = %d\n",
           (firstNum > secondNum) && (firstNum > 0));
    printf("8) (firstNum > secondNum) || (firstNum > 0) = %d\n",
           (firstNum > secondNum) || (firstNum > 0));
    printf("9) !(firstNum < secondNum) = %d\n", !(firstNum < secondNum));

    return 0;
}
