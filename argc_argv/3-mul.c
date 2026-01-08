#include <stdio.h>

int main(int argc, char *argv[])
{
    int multi;
    int i;
    if(argc > 1)
    {
        for (i = 0; i < argc; i++)
        {
            multi *= atoi(argv[i]);
        }
        printf("%d\n", multi);
    }
    else
    {
        printf("Error");
        return(1);
    }
    return(0)
}