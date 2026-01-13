#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
    char *duplicate;
    int i, len = 0;

    /* 1. Handle NULL input */
    if (str == NULL)
    {
        return (NULL);
    }

    /* 2. Calculate the length of the string */
    while (str[len] != '\0')
    {
        len++;
    }

    /* 3. Allocate memory: Length + 1 for the null terminator */
    duplicate = malloc((len + 1) * sizeof(char));

    /* 4. Check if malloc failed */
    if (duplicate == NULL)
    {
        return (NULL);
    }

    /* 5. Copy the characters */
    for (i = 0; i < len; i++)
    {
        duplicate[i] = str[i];
    }

    /* 6. Add the null terminator at the end */
    duplicate[len] = '\0';

    /* 7. Return the new string */
    return (duplicate);
}
