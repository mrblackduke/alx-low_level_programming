#include <stdio.h>
/**
 * main - print alphabets in uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z';)
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
	++alpha;
	putchar('\n');
	return (0);
}
