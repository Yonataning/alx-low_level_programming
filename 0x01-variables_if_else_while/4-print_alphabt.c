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
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		putchar("\n");
	}
	return (0);
}
