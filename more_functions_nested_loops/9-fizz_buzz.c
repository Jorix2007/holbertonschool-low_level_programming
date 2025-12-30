#include "main.h"

void FizzBuzz(void)
{
    int i, j;
    int fizz = 'Fizz';
    int buzz = 'Buzz';
    for(i = 0; i <= 100; i++)
    {
        for(; j <= i; j++)
        {
            if((i % j) == 3)
            {
                printf(fizz);
            }
            else if((i % j) == 5)
            {
                printf(buzz);
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
