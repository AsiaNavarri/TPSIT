/* Assignment:
   Write a C program that, given a positive integer N,
   prints the sum of the first N prime numbers
   alternated (one yes, one no).
*/

#include <stdio.h>  // input/output library inclusion

void main()  // main function inclusion
{
    // declaration and initialization of variables
    int n = 0, number;
    int primeCount = 0, i, j, primeQuantity = 0; 
    int sum, alternateSum = 0;
  
    // acquiring the quantity of prime numbers to be alternately summed
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // loop to find n prime numbers 
    while (primeQuantity < n)
    {   
        // loop to check if the number is prime
        for (j = 1; j <= number; j++)
        {   
            // counts the number of divisors of the number
            if (number % j == 0)
    	    {
    	        primeCount++;
    	    }
        }
    
        // checks the number of divisors and calculates the alternation of numbers to be summed (alternateSum)  
        if ((alternateSum == 1) && (primeCount == 2))
        {
            alternateSum = 0;
        }
            
        else if ((primeCount == 2) && (alternateSum == 0))
        {
    	    sum = sum + number;
    	    primeQuantity++;
            alternateSum++;
        }
        
        // updates counters
        primeCount = 0;
        j = 1;
        number++;
    }
    
    // outputting the value of the sum  
    printf("\nThe sum of alternately added prime numbers is: %d", sum);
}
