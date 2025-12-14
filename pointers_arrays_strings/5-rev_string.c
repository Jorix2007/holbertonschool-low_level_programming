/*
 * File: 5-rev_string.c
 * Auth: Jabir Hasanli
 */

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to modify
 */
void rev_string(char *s)
{
	int i = 0;
	int b = 0;
	char tmp;

	while (s[b] != '\0')
	{
		b++;
	}

	for (b = b - 1; b > i; b--)
	{
		tmp = s[i];
		s[i] = s[b];
		s[b] = tmp;
		i++;
	}
}
