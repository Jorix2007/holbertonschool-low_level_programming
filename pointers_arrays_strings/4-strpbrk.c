#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string containing the bytes to look for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/* Loop through the main string s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Loop through the accept string */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* If we find a match */
			if (s[i] == accept[j])
			{
				return (&s[i]); /* Return the address of the character */
			}
		}
	}

	return (NULL); /* No match found after checking everything */
}
