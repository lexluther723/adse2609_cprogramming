/* this program demonstartes  the if  selection construct .it accepted letter of the alphabets from the uses and checks if its vowel */

// pre-processor directives

#include <stdio.h>
#include <ctype.h> // include the defination  for  the vowel to lower() function

int main()
{
    //character array to hold the user name
    char userLetter;

    // prompt  the user for a letter of the alphabet
    printf("please enter a letter of the alphabet and ill tell you whether is a vowel:\n");
    scanf("%c",&userLetter);

    // convert the user inputs to lowercase
    userLetter = tolower(userLetter);

    // check whether the letter is vowel
    if (userLetter == 'a' || userLetter == 'e' || userLetter == 'i' || userLetter == 'o' || userLetter == 'u');
    printf("\n%c is a vowel.",userLetter);

    return 0;

}
