/*
 * File: 7-puts_half.c
 * Auth: Jabir Hasanli
 */

#include "main.h"

/**
 * puts_half - Function that prints half of a string
 * @str: The string to modify
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int half_len;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		half_len = len / 2;
		for (i = half_len; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		half_len = (len + 1) / 2;
		for (i = half_len; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
