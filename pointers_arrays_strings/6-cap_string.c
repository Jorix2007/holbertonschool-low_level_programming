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
    int capitalize_next = 1;
    char separators[] = " \t\n,;.!?\"(){}";

    for (i = 0; s[i] != '\0'; i++)
    {
        int is_separator = 0;
        for (int j = 0; separators[j] != '\0'; j++)
        {
            if (s[i] == separators[j])
            {
                is_separator = 1;
                break;
            }
        }

        if (is_separator)
        {
            capitalize_next = 1; /* Next character should be capitalized */
        }
        else if (capitalize_next && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A'); /* Capitalize the character */
            capitalize_next = 0; /* Reset the flag */
        }
        else
        {
            capitalize_next = 0; /* Reset the flag */
        }
    }

    return s;
}
