#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to look for
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* Edge case: if needle is empty, return haystack (standard rule) */
	if (*needle == '\0')
		return (haystack);

	/* Loop through the haystack */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* * For each character in haystack, check if the 
		 * needle matches starting from here 
		 */
		for (j = 0; needle[j] != '\0'; j++)
		{
			/* If characters don't match, break the inner loop */
			if (haystack[i + j] != needle[j])
				break;
		}

		/* * If we reached the end of needle (needle[j] is \0),
		 * it means we matched everything!
		 */
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}
