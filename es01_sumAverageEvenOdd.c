/* After reading N numbers (integers),
   with N chosen by the user
   and not exceeding 30 elements,
   calculate the sum and average of even numbers,
   and of odd numbers (use %).
*/

#include <stdio.h>

void main()
{
    // declaration and initialization of variables
    int n = 0, i, sumEven = 0, sumOdd = 0, nEven = 0, nOdd = 0;  // integer variables
    float avgEven, avgOdd;                                       // real variables

    // acquiring the quantity of numbers to be entered
    printf("Enter the number of elements (not exceeding 30): \n");
    scanf("%d", &n);

    // checking the number of elements to be entered
    while (n <= 0 || n > 30)
    {
        printf("Invalid number. \nEnter a number between 1 and 30: \n");
        scanf("%d", &n);
    }

    int numbers[n];  // declaration of the array

    for (i = 1; i <= n; i++)
    {
        // acquiring values of the array
        printf("Enter the number at position %i:  ", i);
        scanf("%d", &numbers[i]);
    }

    for (i = 1; i <= n; i++)
    {

        if (numbers[i] % 2 == 0)
        {
            // calculation of the number of even values
            nEven = nEven + 1;
            // calculation of the sum of even values
            sumEven = sumEven + numbers[i];
        }

        else
        {
            // calculation of the number of odd values
            nOdd = nOdd + 1;
            // calculation of the sum of odd values
            sumOdd = sumOdd + numbers[i];
        }
    }

    // calculation of the averages
    avgEven = (float)sumEven / nEven;
    avgOdd = (float)sumOdd / nOdd;

    // outputting the results
    printf("\nThe sum of the even numbers entered is: %d ", sumEven);
    printf("\nThe average of the even numbers entered is: %.2f \n", avgEven);

    printf("\nThe sum of the odd numbers entered is: %d ", sumOdd);
    printf("\nThe average of the odd numbers entered is: %.2f ", avgOdd);
}