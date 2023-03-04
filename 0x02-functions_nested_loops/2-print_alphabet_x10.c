#include <stdio.h>

/**
 * void print_alphabet_x10 - 10 times in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char k = 'a';
	int j;

	for (j = 0; j <= 9; j++)
	{
		while (k <= 'z')
		{
			putchar(k);
		k++;
		}
	}
	putchar('\n');
)
