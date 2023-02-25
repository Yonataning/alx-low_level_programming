#include <stdio.h>

/**
 * main -Prints the alphabet in lower case except q and e,then new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 'a';

	for (i = 'a'; i < 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	putchar('\n');
	}
	return (0);
}
		
