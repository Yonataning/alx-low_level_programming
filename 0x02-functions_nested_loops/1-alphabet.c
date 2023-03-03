#include <stdio.h>

/**
 * main - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar("%c", c);
	c++;
	}
	putchar("\n");
	print_alphabet();
	return (0);
}

