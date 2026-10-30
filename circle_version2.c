/*
 * This program accepts the radius of a circle from the user, calculates and displays its area and circumference.
 */
#include <stdio.h>
#define mypi 3.141593 // define pie as a constant

// main function that defines the entry point to the program
int main()
{
    // variables to be used in the program
    float radius, area, circumfrence;

    // prompt the user for the circle radius
    printf("please enter the radius of the circle in cm.\n");
    scanf("%f", &radius);

    // calculate the area and circumference of the circle
    area = mypi * radius * radius;
    circumfrence = mypi * (radius * 2);

    // display the circle dimensions
    printf("\nCircle dimensions");
    printf("\n------------------------------------------");
    printf("\nRadius: %6.2f cm.", radius);
    printf("\nArea:   %6.2f cm².", area);
    printf("\nCircumference: %6.2f cm.", circumfrence);
    printf("\n------------------------------------------");

    return 0;
}
