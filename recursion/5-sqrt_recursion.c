#include "main.h"

int _sqrt_recursion(int n)
{
    if(n < 0)
    {
        return(-1);
    }
    return(n * _sqrt_recursion(n));
}