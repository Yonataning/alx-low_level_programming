#include "stdio.h"
#include <stdio.h>

/**
 * main - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	putchar('\n');
	}
	return (0);
}
