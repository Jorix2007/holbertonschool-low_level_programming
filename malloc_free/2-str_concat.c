#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j, len1, len2;

	/* 1. If NULL is passed, treat it as empty string "" */
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

	/* 4. Allocate memory: len1 + len2 + 1 (for null terminator) */
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
		return (NULL);

	/* 5. Copy s1 into the new memory */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* 6. Copy s2 AFTER s1 */
	for (j = 0; j < len2; j++)
	{
		concat_str[i] = s2[j];
		i++;
	}

	/* 7. Null terminate the new string */
	concat_str[i] = '\0';

	return (concat_str);
}