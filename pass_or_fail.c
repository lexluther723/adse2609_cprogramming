/*Write a C program called "pass_or_fail" that accepts the user's score in an exam and tell the whether they've passed or not. Pass mark is 55%.
Extra credit: reject score above 100 or less than 0 */

#include <stdio.h>

int main() {
    int score;

    // Prompt user for score there score
    printf("Enter your exam score  between 0-100 : ");
    scanf("%d", &score);

    // Extra credit: reject invalid scores
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a number between 0 and 100.\n");
        return 1;  // Exit with error code
    }

    // Main logic
    if (score >= 55) {
        printf("You have passed! \n");
    } else {
        printf("You have failed! \n");
    }

    return 0;
}
