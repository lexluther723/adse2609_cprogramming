
/*
This program demonstrates the use of loops
to display the first ten integers.
*/

// Preprocessor directive
#include <stdio.h>

int main()
{
    // Variable to be used in the program
    int n;

    // Uses a for loop to display the first 10 integers
    for (n = 1; n <= 10; n++)
    {
        printf("\nCurrent value of n is: %2d", n);
    }

    return 0;
}
