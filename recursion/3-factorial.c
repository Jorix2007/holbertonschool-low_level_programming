#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	/* Error handling: Factorial of negative is impossible */
	if (n < 0)
	{
		return (-1);
	}

	/* Base case: Factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

	/* Recursive step: n * factorial of (n-1) */
	return (n * factorial(n - 1));
}
