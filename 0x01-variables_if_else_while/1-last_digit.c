#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - return response if a number is greater
 * than 5,0 or less than 6 and equal to 0
 * Return: 0 always (SUCCESS)
 */
int main(void)
{
	int n;

	int q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	q = n % 50;

	if (q > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, q);
	if (q == 0)
		printf("Last digit of %d  is %d and is 0\n", n, q);
	if (q < 6 && q != 0)
		printf("Last digit of %d  is %d and is less than 6 and not 0\n", n, q);

	return (0);
}
