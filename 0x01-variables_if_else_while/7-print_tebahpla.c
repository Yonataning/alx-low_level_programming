#include <stdio.h>

/**
 * main - Prints lower alphabet letters in reverse ending with new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k = 'z';

	while (k >= 'a')
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}	
