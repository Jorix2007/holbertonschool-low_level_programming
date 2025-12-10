#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* 1. Loop for digits 0-9 */
	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	/* 2. Loop for letters a-f */
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	/* 3. New line */
	putchar('\n');

	return (0);
}
