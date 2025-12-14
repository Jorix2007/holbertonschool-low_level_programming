/*
 * File: 4-print_rev.c
 * Auth: Jabir Hasanli
 */

#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: The string to print
 */
void print_rev(char *s)
{
	int i = 0;
	int b = 0;

	while (s[i] != '\0')
	{
		b++;
		i++;
	}
	for (b = b - 1; b >= 0; b--)
		_putchar(s[b]);
	_putchar('\n');
}
