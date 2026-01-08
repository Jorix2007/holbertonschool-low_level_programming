#include "main.h"

/* Helper function declaration */
int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to check
 *
 * Return: the square root, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    /* Start checking from 0 or 1 */
    return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - checks if i is the square root of n
 * @n: the number to find the root of
 * @i: the current test number (the iterator)
 *
 * Return: i if it is the root, -1 if not found
 */
int _sqrt_helper(int n, int i)
{
    /* Base Case: We found the square root */
    if (i * i == n)
        return (i);

    /* Base Case: i squared is greater than n, so n has no natural root */
    if (i * i > n)
        return (-1);

    /* Recursive Step: Try the next number */
    return (_sqrt_helper(n, i + 1));
}
