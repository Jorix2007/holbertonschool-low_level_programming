#include "main.h"

/*


*/
int _isalpha(int c)
{
    if (c > 'a' && c < 'z')
        _putchar(1 + '0');
    else if (c > 'A' && c < 'Z')
        _putchar(1 + '0');
    else
        return(0);
}
