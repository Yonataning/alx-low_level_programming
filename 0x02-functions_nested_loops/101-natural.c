
#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (Success)
 */

int main(void)

{
	int a, c = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	c += a;
	}
	a++;
	}
	printf("%d\n", c);
	return (0);

}
