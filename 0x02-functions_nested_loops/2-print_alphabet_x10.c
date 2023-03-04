#include <stdio.h>

/**
 * print_alphabet_x10 - 10 times in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char k = 'a';
	int j;

	while (j <= 9)
	{
	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
		_putchar('\n');
		j++;
	}
}
