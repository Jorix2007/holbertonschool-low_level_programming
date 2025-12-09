#include <stdlib.h>
#include <time.h>
#include <stdio.h> /* <--- 1. Added this header */

/**
 * main - Prints the last digit of a random number
 * Return: Always 0 (Success)
 */
int main(void)
{
    /* 2. DECLARATION ZONE (All variables here) */
    int n;
    int last_digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    /* 3. EXECUTION ZONE */
    last_digit = n % 10;

    /* 4. Fixed printf: Added variables n and last_digit */
    printf("Last digit of %d is %d ", n, last_digit);

    if (last_digit > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (last_digit == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return (0);
}
