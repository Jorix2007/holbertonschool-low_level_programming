#include <stdio.h>

/**
 * main - Prints all single digit numbers separated by commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		/* 1. Print the number */
		putchar(n + '0');

		/* 2. Print comma and space ONLY if it is NOT the last number */
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	/* 3. Print new line */
	putchar('\n');

	return (0);
}
