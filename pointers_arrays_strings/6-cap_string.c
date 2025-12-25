#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @s: The string to capitalize
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int cap = 1;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cap && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32; /* 32 - это разница между 'a' и 'A' */
		}

		cap = 0;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				cap = 1;
				break;
			}
		}
	}

	return (s);
}
