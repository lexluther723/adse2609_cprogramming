/*
 * This program accepts the base and height of a triangle from the user, calculates and displays its area and perimeter.
 */
#include <stdio.h>
#include <math.h>   // added for sqrt() and pow()

// main function that defines the entry point to the program
int main()
{
    // variables to be used in the program
    float base, height, area, perimeter, hypotenuse;

    // prompt the user for the base of the triangle
    printf("please enter the base of the triangele in cm.\n");
    scanf("%f", &base);

    // prompt the user for the height radius
    printf("please enter the base and height  of the triangele in cm.\n");
    scanf("%f", &height);

    // declare and calculate the triangles hypotenuse
    hypotenuse = sqrt(pow(height, 2) + pow(base, 2));

    // calculate the area and perimeter of the triangle
    area = 0.5 * base * height;
    perimeter = base + height + hypotenuse;

    // display the triangle dimensions
    printf("\nTriangle dimensions");
    printf("\n------------------------------------------");
    printf("\n%-13s: %6.2f cm.", "Base", base);
    printf("\n%-13s: %6.2f cm.", "Height", height);
    printf("\n%-13s: %6.2f cm.", "Hypotenuse", hypotenuse);
    printf("\n%-13s: %6.2f cm².", "Area", area);
    printf("\n%-13s: %6.2f cm².", "Perimeter", perimeter);
    printf("\n------------------------------------------");

    return 0;
}
