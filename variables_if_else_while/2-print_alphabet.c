#include <stdio.h>

/**
 * main - Prints the alphabet in uppercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
