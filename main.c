// point-of-scale system

#include <stdio.h>

int main()
{

    printf("===============\n");
    printf("  C SNACK BAR\n");
    printf("===============\n\n");
    printf("1. Hot dog - KSH 90.00\n");
    printf("2. Hamburger - KSH 300.00\n");
    printf("3. French fries - KSH 150.00\n");
    printf("4. Milk shake - KES 150.00\n");
    printf("5. Coffee - KES 150.00\n");
    printf("6. Beef smokie - KES 40.00\n");

    int itemNo, quantity, subTotal = 0, price;
    char option;
    while (option != "0")
    {
        printf("\nEnter Item No: ");
        scanf("%d", &itemNo);
        while (itemNo < 1 || itemNo > 6)
        {
            printf("\nError!\n");
            printf("Please enter a valid No: ");
            scanf("%d", &itemNo);
        }

        switch (itemNo)
        {
        case (1):
            price = 90;
            break;
        case (2):
            price = 300;
            break;
        case (3):
            price = 150;
            break;
        case (4):
            price = 150;
            break;
        case (5):
            price = 150;
            break;
        case (6):
            price = 40;
            break;
        default:
            price = 0;
            break;
        }

        printf("\nHow many would you like to order: ");
        scanf("%d", &quantity);
        printf("\nItem has been added to cart");

        subTotal += (price * quantity);

        printf("\nSubtotal: %d", subTotal);
        printf("\nPress \"0\" to exit or any other key to add more items: ");
        scanf("%c", &option);
    }

    double VAT = 0.16 * subTotal, total, amountPaid, change;
    printf("\nVAT at 16 percent: %f", &VAT);

    total = subTotal + VAT;
    printf("\nTotal Amount: %f", &total);

    printf("\nEnter amount Tendered for payment: ");
    scanf("%f", &amountPaid);

    change = amountPaid - total;
    printf("\nChange: %f", &change);

    printf("\n\n\tTHANK YOU AND COME AGAIN");
    return 0;
}