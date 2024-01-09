/* Assignment:
   A bank wants to know some information about its stocks held in the portfolio.
   Write the C program that, after entering the stock name and its price from the keyboard,
   determines and displays in Output:
   1) The sum of stock prices;
   2) The average stock price;
   3) The stock with the maximum price;
   4) The stock with the minimum price;
   5) The average stock price with an amount between 2.50 and 3.50 euros, inclusive.
   The input ends with the word "terminato".
   The program must allow the re-entry of the price if it is zero or less.
*/

#include <stdio.h>   // input/output library inclusion
#include <string.h>  // string library inclusion

void main() 
{
    // declaration and initialization of variables
    char input[50];
    float price = 0; 
    float sumPrices = 0, averagePrices = 0, maxPrice = 0, minPrice = 0;
    float partialSum = 0, partialAverage = 0; 
    int actionMax = 0, actionMin = 0;
    int nActions = 0, nPartialActions = 0, insertion = 1;

    // acquiring stock name
    while (insertion == 1) 
    {
        printf("Enter the stock name (or 'terminato' to exit): ");
        scanf("%s", input);

        // checking the inserted name different from 'terminato'
        if (strcmp(input, "terminato") == 0) 
        {
            insertion = 0;  // condition to exit the loop
        }

        if (insertion == 1)  // condition to continue the loop
        {
            do 
            { 
                // acquiring stock price
                printf("Enter the stock price: ");
                scanf("%f", &price);

                // checking stock price
                if (price <= 0) 
                {
                    printf("The price must be greater than zero. Re-enter.\n\n");
                }

            } while (price <= 0);
                
            // calculating the sum of stock prices
            sumPrices = sumPrices + price;
            
            // counting the number of stocks
            nActions++;
            
            // counting stocks with an amount between 2.50 and 3.50 euros
            if ((price >= 2.50) && (price <= 3.50))
            {
                partialSum = partialSum + price;
                nPartialActions ++; 
            }

            // counting max and min prices
            if (nActions == 1)
            {
                minPrice = price; 
                maxPrice = price;
                actionMax = nActions;
                actionMin = nActions;
            }

            else
            {
                if (minPrice > price)
                {
                    minPrice = price;
                    actionMin = nActions;
                }
                
                if (maxPrice < price)
                {
                    maxPrice = price;
                    actionMax = nActions;
                }
            }
        }
    }

    // calculating averages
    averagePrices = sumPrices / nActions;
    partialAverage = partialSum / nPartialActions; 

    // outputting the results
    if (nActions > 0)
    {
        printf("1) The sum of stock prices is: %.2f euros\n", sumPrices);
        printf("2) The average of stock prices is: %.2f euros\n", averagePrices);
        printf("3) The stock with the maximum price is: %d, valued at %.2f euros\n", actionMax, maxPrice);
        printf("4) The stock with the minimum price is: %d, valued at %.2f euros\n", actionMin, minPrice);
        printf("5) The average stock price with an amount between 2.50 and 3.50 euros is: %.2f\n", partialAverage);
    }

    else 
    {
        printf("No stock entered.\n");
    }
}
