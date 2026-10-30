#include <stdio.h>

int main()
{
    int choice;

    printf("\n=====================================");
    printf("\n      Welcome to the ADSE Restaurant:");
    printf("\n=====================================\n");
    printf("1. Chips & Kuku         - KES 1500\n");
    printf("2. Burger & Soda       - KES 1000\n");
    printf("3. Pizzaa               - KES 1200\n");
    printf("4. Fresh Juice          - KES 500\n");
    printf("5. TacoO                - KES 1400\n");

    printf("\nPlease enter the meal/drink of your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nYou selected: Chips & Kuku\nPrice: KES 1500\nYour meal will be served shortly.");
            break;
        case 2:
            printf("\nYou selected: Burger & Soda\nPrice: KES 1000\nYour meal will be served shortly.");
            break;
        case 3:
            printf("\nYou selected: Pizzaa\nPrice: KES 1200\nYour meal will be served shortly.");
            break;
        case 4:
            printf("\nYou selected: Fresh Juice\nPrice: KES 500\nYour meal will be served shortly.");
            break;
        case 5:
            printf("\nYou selected: TacoO\nPrice: KES 1400\nYour meal will be served shortly.");
            break;
        default:
            printf("\nInvalid choice!\nPlease enter a number between 1 and 5.\n");
            break;
    }

    return 0;
}
