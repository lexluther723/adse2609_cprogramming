/* this program ask/promt the user for their name ,read the inputs from console and displays a greeting message */

// pre-processor directives

#include <stdio.h>

int main()

{
    // Character array hold the users name

    char name[80];

    // promt the user for their name
    printf("please enter your name:\n");

    // read in the user name
    gets(name); // why did we not uses scanf() to read in the name? dastun mwalimo the second part will be droped

    // greet the user
    printf("\nHello\"%s\"from C programming!",name);

    return 0 ;
}
