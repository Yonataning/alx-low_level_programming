#include <stdio.h>

/**
 * main - Printing alphabet in lower and upper case
 *
 * Return: Akways 0 (Success)
 */
int main(void)
{
	char caps;

	for (caps = 'a'; caps <= 'z'; caps++)
		putchar(caps);
	for (caps = 'A'; caps <= 'Z'; caps++)
		putchar(caps);
	putchar('\n');
	return (0);
}
