/*
 * This program demonstrates the use of do-while loops
 * to display the first ten integers.
 */

// Preprocessor directive
#include <stdio.h>

int main()
{
    // Variable to be used in the program
    int n = 1;

    // Uses a do-while loop to display the first 10 integers
    do
    {
        printf("\nCurrent value of n is: %2d", n);
        n++;
    } while (n <= 10);

    return 0;
}
