
#include <stdio.h>

int main()
{
    // varibles to be used in the program

    int amount, sugar, milk, change, cost;

    // promt the user for their amount of money

    printf("please enter the the amount you have on your account:\n");
       //read in the amount

    scanf("%d",&amount);


    //read in the value  of sugar
    printf("please enter the price for sugar:\n");

    scanf("%d",&sugar);

    printf("please enter the price for milk to :\n");

    //read in the value of milk
    scanf("%d",&milk);

    //add the two numbers and assgn the results to sum

    cost = sugar + milk;

    printf("\n%d + %d =%d\n",sugar,milk,cost);

    change =amount - cost;

    printf("\n%d + %d =%d\n",amount,cost ,change);


    return 0;
}
