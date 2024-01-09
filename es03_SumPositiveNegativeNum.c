/* Assignment:
   Write a C program that, after reading N numbers (N chosen by the user),
   calculates and displays on the screen the sum of positive numbers,
   the sum of absolute values of negative numbers,
   the count of negative and positive numbers,
   and the average of positive and negative numbers.
*/

#include <stdio.h>  // input/output library inclusion

void main()  // main function inclusion
{
    // declaration and initialization of variables
    int n = 0, number;
    int nPositives = 0, nNegatives = 0, i;
    float sumPositives = 0, sumNegatives = 0, avgPositives = 0, avgNegatives = 0;

    // Acquisition of the number of values to be entered
    printf("Enter the number of elements (N): ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) 
    {
        // Input of numbers
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &number);

        // Calculation of the sum of positive numbers
        if (number > 0) 
        {
            sumPositives = sumPositives + number;
            nPositives++;
        } 
        
        // Calculation of the sum of absolute values of negative numbers
        else if (number < 0) 
        {
            sumNegatives = sumNegatives - number;   // "-" used to obtain the absolute value
            nNegatives++;
        }
        
        // Calculation of the average of positive numbers
        if (nPositives > 0) 
        {
            avgPositives = sumPositives / nPositives;
        }
        
        // Calculation of the average of negative numbers
        if (nNegatives > 0) 
        {
            avgNegatives = sumNegatives / nNegatives;
        }

    }

    // Outputting the results
    printf("\nSum of positive numbers: %.2f\n", sumPositives);
    printf("Sum of negative numbers (absolute value): %.2f\n", sumNegatives);
    printf("Quantity of positive numbers entered: %d\n", nPositives);
    printf("Quantity of negative numbers entered: %d\n", nNegatives);
    printf("Average of positive numbers: %.2f\n", avgPositives);
    printf("Average of negative numbers: %.2f\n", avgNegatives);
}