/* this program demonstarte the various  arithematic operators in c */

// pre-processor directives
// emoji windows + .

#include <stdio.h>

int main()

{
    // variables to be used in the program

    int firstNum=8, secondNum=5;

    // display the values of the above variables
    printf("Value  of 'firstNum' and  'secondNum' are %d and %d respectively.",firstNum,secondNum);

   // perform the various  arithematic operations and display their reslts
   printf("\nAddition:%d + %d =%d", firstNum,secondNum, firstNum +secondNum );
   printf("\nmultiplication:%d X %d =%d", firstNum,secondNum, firstNum * secondNum );
   printf("\ndivision:%d � %d =%d", firstNum,secondNum, firstNum /  secondNum );
   printf("\nModulus:%d %% %d =%d", firstNum,secondNum, firstNum +secondNum );

    return 0 ;
}
