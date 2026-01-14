#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *str;

	/* 1. Treat NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* 2. Calculate length of s1 */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	/* 3. Calculate length of s2 */
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* 4. Adjust n: If n is greater/equal to s2 length, use full s2 length */
	if (n >= len2)
		n = len2;

	/* 5. Malloc: len1 + n (partial s2) + 1 (null terminator) */
	str = malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
		return (NULL);

	/* 6. Copy s1 */
	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	/* 7. Copy n bytes of s2 */
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	/* 8. Null terminate */
	str[i] = '\0';

	return (str);
}
