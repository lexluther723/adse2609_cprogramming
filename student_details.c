// a c-program that stores and displays a student's details.
// what the program is expected to do
// 1 Declare a variable for the student's age using an appropriate data type.
// 2 Declare a variable for the student's average mark, allowing decimal values.
// 3 Declare a variable for the student's grade, represented by a single character.
// 4 Assign sample values to all three variables.
// 5 Display the values using appropriate printf() format specifiers.
# include <stdio.h>

int main ()
{
    //this are the variables to be used for the program

    int age = 16;
    float averageMark = 50.60;
    char grade = 'c';

    printf("\n the student age is : %d",age);

    printf("\n the  student average marks is :%2f",averageMark);

    printf("\n the student grade is grade is : %c",grade);

    return 0;
}
