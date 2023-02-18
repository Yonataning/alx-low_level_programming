#include <stdio.h>

/**
 * main - Printing alphabet in lower case followed by new a line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i > 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
		return (0);
}
