#include <stdio.h>

/**
 * print_alphabet_x10 - 10 times in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{

	char k;
	int j = 0;

	while (j <= 9)
	{
	for (k = 'a'; k <= 'z'; k++)
	{
	putchar(k);
	}
	putchar('\n');
	j++;
	}
}
