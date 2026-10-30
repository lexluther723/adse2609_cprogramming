// Write a C program called “student_grade” that determines a student's examination result.
// Ask the user to enter a mark between 0 and 100, then display the appropriate result using if, else if and else.Use these rules:
// 70–100: Distinction
// 60–69: Credit
// 50–59: Pass
// 0–49: Fail
// Below 0 or above 100: Invalid mark

#include <stdio.h>

int main()
{
    int mark;

    // Ask user for mark from stiudent
    printf("Enter the mark (0-100): ");
    scanf("%d", &mark);

    // Handle invalid marks
    if (mark < 0 || mark > 100) {
        printf("Invalid marks Please enter a number between 0 and 100.\n");
    }
    // Distinction
    else if (mark >= 70) {
        printf("Congratulations! You have a Distinction.\n");
    }
    // Credit
    else if (mark >= 60) {
        printf("Well done! You have a Credit.\n");
    }
    // Pass
    else if (mark >= 50) {
        printf("You have passed.\n");
    }
    // Fail
    else {
        printf("You have failed.\n");
    }

    return 0;
}
