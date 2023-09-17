#include <stdio.h>
/**
 * main - print alphabets in uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;
	char beta;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	for (beta = 'A'; beta <= 'Z'; ++beta)
	putchar(alpha);
	putchar(beta);
	putchar('\n');
	return (0);
}
