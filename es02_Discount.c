/* Assignment:
   On an amount of money (related to the purchase of a product), 
   a discount is to be applied based on the entered amount following the following scheme:
   - From 0 to 500€, a discount of 10%;
   - From 501 to 1000, a discount of 20%;
   - Beyond 1001, a discount of 30%.
   After calculating and displaying the discount and the net price on the screen, 
   the program must allow re-entering additional amounts of money.
*/

#include <stdio.h>

void main()
{
    // declaration and initialization of variables
    float netPrice = 0;
    float discountedPrice = 0, appliedDiscount = 0;
    int discount = 0;
    char response;

    do
    {
        // acquiring net price from the keyboard
        printf("Enter an amount of money: ");
        scanf("%f", &netPrice);

        // checking the entered value
        while (netPrice < 0)
        {
            printf("Invalid value");
            printf("Enter an amount of money >0: ");
            scanf("%f", &netPrice);
        }

        // calculating the discount
        if (netPrice >= 0 && netPrice <= 500)
        {
            // calculating discounted price at 10%
            discount = 10;
            appliedDiscount = (netPrice * 10) / 100;
            discountedPrice = netPrice - appliedDiscount;
        }

        else if (netPrice >= 501 && netPrice <= 1000)
        {
            // calculating discounted price at 20%
            discount = 20;
            appliedDiscount = (netPrice * 20) / 100;
            discountedPrice = netPrice - appliedDiscount;
        }

        else
        {
            // calculating discounted price at 30%
            discount = 30;
            appliedDiscount = (netPrice * 30) / 100;
            discountedPrice = netPrice - appliedDiscount;
        }

        // outputting the results
        printf("\nThe net price is: %.2f €", netPrice);
        printf("\nThe discounted price is: %.2f €", discountedPrice);
        printf("\nThe applied discount is %d percent", discount);

        // requesting program repetition
        printf("\n\nDo you want to repeat the program? \nType 's' to continue\n");
        scanf(" %c", &response);

    } while (response == 's'); // checking the condition to repeat the program
}