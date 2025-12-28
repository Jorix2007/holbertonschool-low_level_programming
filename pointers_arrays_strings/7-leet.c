#include "main.h"
#include <stddef.h>

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

    if (s == NULL)
        return (s);

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (s[i] == subs[j])
            {
                s[i] = repl[j];
                break; 
            }
        }
    }

    return (s);
}
