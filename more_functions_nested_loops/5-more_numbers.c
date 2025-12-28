#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
    int i, num;

    for (i = 0; i < 10; i++)
    {
        for (num = 0; num <= 14; num++)
        {
            /* If number is greater than 9, print the first digit (1) */
            if (num > 9)
            {
                _putchar((num / 10) + '0');
            }
            
            /* Always print the last digit */
            _putchar((num % 10) + '0');
        }
        _putchar('\n');
    }
}
