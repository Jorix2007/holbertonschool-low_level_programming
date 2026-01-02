#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int check; /* Flag to check if we found a match */

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		/* Inner loop: Check if s[i] exists in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				check = 1; /* Found a match! */
				break;     /* Stop searching accept, go to next char in s */
			}
		}

		/* If we finished the inner loop and didn't find a match */
		if (check == 0)
			return (i);
	}

	return (i);
}
