#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - assign a random number to n
 * each time its executed
 * RETURN : 0 (SUCCESS)
 */
int main(void)
{
	int n;

	int q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (q > 5);
		printf("Last digit of %d n is %d and is greater than 5\n" n, q);
	if (q == 0);
		printf("Last digit of %d n is %d and is 0\n", n, q);
	if (q < 6 $$ q != 0)
		printf("Last digit of %d n is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
