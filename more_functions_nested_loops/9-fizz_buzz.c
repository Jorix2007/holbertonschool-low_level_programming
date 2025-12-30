#include "main.h"

void FizzBuzz(void)
{
    int i, j;
    for(i = 0; i <= 100; i++)
    {
        for(; j <= i; j++)
        {
            if((i % j) == 3)
            {
                printf('Fizz');
            }
            else if((i % j) == 5)
            {
                printf('Buzz');
            }
            else if(((i % j) == 3) && ((i % j) == 5))
            {
                printf('FizzBuzz');
            }
            else
            {
                printf(i);
            }
        }
    }
}
