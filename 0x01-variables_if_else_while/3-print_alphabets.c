#include <stdio.h>

/**
 * main - Printing alphabet in lower and upper case
 *
 * Return: Akways 0 (Success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	alph = 'A';

	while (alpha <= 'A')
	{
		putchar(alpha);
		alpha++;
	}
	putchar("\n")
	return (0);
}
