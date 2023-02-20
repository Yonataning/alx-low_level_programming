#include <stdio.h>

/**
 * main -Prints the alphabet in lower case except q and e,then new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
				putchar(x);
		putchar('\n');
	}
		return (0);
}
