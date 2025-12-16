#include "main.h"

void print_alphabet_x10(void)
{
    char letter;
    int i;

    /* Loop from 0 to 9 (10 times) */
    for (i = 0; i < 10; i++)
    {
        /* RESET letter to 'a' at the start of every row */
        letter = 'a'; 
        
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
    }
    
}
