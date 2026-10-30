// C program called “calc_payment” that calculates the total cost of items purchased at a shop.
// the program is supposed to :
// promt the user to enter the price of an item.
// promt the user to enter the quantity purchased.
// Calculate the total cost.
// Calculate a discount of 10% if the total cost is at least KSh 1,000.
// Display the total cost, discount and
// Example: If the price is KSh 250 and the quantity is 5, the total cost is KSh 1,250, the discount is KSh 125, and the final amount is KSh 1,125.
// Use variables, arithmetic operators, scanf() and printf().

#include <stdio.h>

int main()
{
   int price,quantity;
   float total_cost,discount,final_amount;

    // Ask for price and quantity
    printf("\nEnter the price of the item: ");
    scanf("%d", &price);

    printf("\nEnter the quantity purchased: ");
    scanf("%d", &quantity);

    // Calculate total cost of items to be purchased
    total_cost = price * quantity;

    // Calculate discount (10% if total >= 1000)
    // discount = 0.0;
    if (total_cost >= 1000.0) {
        discount = total_cost * 0.10;

    }

    // Calculate final amount to be paid
    final_amount = total_cost - discount;

    //  receipt
    printf("\n=====receipt====\n");
    printf("Price: KSh %d\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Total cost: KSh %.2f\n", total_cost);
    printf("the final amount after discount is : ksh %.2f\n",final_amount);

    return 0;
}
