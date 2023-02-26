#include <stdio.h>

/**
 * main - Prints all #s of base 16 in lowercase, followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = 0;

	while (l <= 9);
	{
		putchar(l);
		l++;
	}
	l = 'a';

	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
