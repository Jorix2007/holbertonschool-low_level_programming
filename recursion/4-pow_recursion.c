#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base value
 * @y: The exponent value
 *
 * Return: Result of x^y, or -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	/* Error case: If exponent is negative, return -1 */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: Any number to the power of 0 is 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Recursive step: Multiply x by the function with y - 1 */
	return (x * _pow_recursion(x, y - 1));
}
