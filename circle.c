/*
 * This program accepts the radius of a circle from the user,calculate and display its area and circumfrence.
 */
#include <stdio.h>
#include <math.h>  // <-- added
# define mypi 3.141593 // define pie as a constant
// main function that defines the  entry point to the program
int main()
{
    // varibles to be used to the progam
    float radius,area,circumfrence;
    //promt the user fot the circle radius
    printf("please enter the radius of the circle in cm.\n");
    scanf("%f",&radius);
    //calculate the area and circumfrence of the circle
    area = mypi*radius*radius;
    circumfrence =mypi *(radius*2);
    // dispaly  the circle dimmensions
    printf("\n circle  dimension");
    printf("\n------------------------------------------");
    printf("\nRadius: %6.2f cm.", radius);
    printf("\nArea:   %6.2f cm².", area);
    printf("\nCircumfrence: %6.2f cm.", circumfrence);
    printf("\n------------------------------------------");
    return 0;
}
