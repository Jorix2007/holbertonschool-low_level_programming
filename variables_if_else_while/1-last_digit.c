#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    int last_digit = n % 10;
	if (last_digit > 5)
        prinf("Last digit of %d is ");
    else if (last_digit < 6 && last_digit != 0)
        printf("and is less than 6 and not 0");
    else 
        printf("and is 0\n");
	return (0);
}
