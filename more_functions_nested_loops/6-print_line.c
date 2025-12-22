#include "main.h"

/**
 * print_line - Prints a straight line using the character '_'
 * @n: The number of times to print the character '_'
 *
 * Return: void
 */
void print_line(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
