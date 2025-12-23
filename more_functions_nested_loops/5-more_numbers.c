#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
    int i, num;
    for (i = 0; i < 10; i++)
    {
        for (num = 0; num <= 14; num++)
        {
            _putchar(num + '0');
        }
        _putchar('\n');
    }
}
