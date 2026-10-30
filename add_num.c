// c program that  accecpt two numberd sums them and dispalys their sum
#include <stdio.h>

int main()
{
    // varibles to be used in the program

    int num1, num2, sum;

    // promt the user for variable to be added

    printf("please enter the value  of the first number to be added:\n");

    //read in the value  of the first number

    scanf("%d",&num1);

    printf("please enter the value  of the second  number to be added:\n");
    //read in the value of the second number
    scanf("%d",&num2);

    //add the two numbers and assgn the results to sum

    sum = num1 + num2;

    printf("\n%d + %d =%d\n",num1,num2,sum);

    return 0;
}
