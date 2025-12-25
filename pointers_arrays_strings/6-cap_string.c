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
        if (capitalize_next && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
        capitalize_next = 0;
        for (int j = 0; separators[j] != '\0'; j++)
        {
            if (s[i] == separators[j])
            {
                capitalize_next = 1;
                break;
            }
        }
    }
    return s;
}
