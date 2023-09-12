#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - return responses if a number is 0,positive or negative
 *
 *Return:always 0 (success)
*/
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n>0)
        (
            printf("%dis positive\n",n);
        )
        else if (n==0)
        (
            printf("%dis zero\n",n);
        )
        else (n<0)
        (
            printf("%dis negative\n",n);
        )
        return (0);
}
