#include <stdio.h>

/**
 * main -Prints the alphabet in lower case except q and e,then new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a';
	int i;

	for (i = 0; i < 26; i++)
	if ( x != 'e' && x != 'q')
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
