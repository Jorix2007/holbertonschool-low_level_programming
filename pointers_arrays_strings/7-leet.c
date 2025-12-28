#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char repl[] = "4433007711";

	/* Iterate through the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Iterate through the mapping arrays */
		for (j = 0; j < 10; j++)
		{
			/* The ONLY allowed IF statement */
			if (s[i] == subs[j])
			{
				s[i] = repl[j];
			}
		}
	}

	return (s);
}
