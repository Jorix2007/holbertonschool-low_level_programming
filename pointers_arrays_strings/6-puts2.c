/*
 * File: 6-puts2.c
 * Auth: Jabir Hasanli
 */

#include "main.h"

/**
 * puts2 - Function that prints every other character of a string.
 * @str: The string to modify
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
