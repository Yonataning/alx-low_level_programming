#include <stdio.h>

/**
 * main - prints all single digit #s of base 10 from 0, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 0; k <= 8; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
