/*
 * This program demonstrates the use of while loops
 * to display the first ten integers.
 */

// Preprocessor directive
#include <stdio.h>

int main()
{
    // Variable to be used in the program
    int n = 1;

    // Uses a while loop to display the first 10 integers
    while (n <= 10)
    {
        printf("\nCurrent value of n is: %2d", n);
        n++;                    // <-- This was missing in all your previous versions!
    }

    return 0;
}
