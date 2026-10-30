/* this program demonstartes  the 'if.. else..'  selection construct .it accepted a whole number and determines  whether a whole number is odd or even */
// pre-processor directives

#include <stdio.h>
#include <ctype.h> // include the defination  for  the vowel to lower() function

int main()
{
    //variables to bee used in the program
    int num;


    // prompt and read a whole number from the user
    printf("please enter a number  and I'll tell you whether is a odd or even:\n");
    scanf("%c",&num);

    // uses if else  constuct to determine whether the number is odd or even
    if(num % 2==1)
        printf("\n%d is an odd number",num);
    else
        printf("\n%d is a even number",num);


    return 0;

}
