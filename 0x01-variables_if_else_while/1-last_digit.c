#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints last digit of a random generatd number
 * and whether it is greater than 5 or its a 0 or less than 6 
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 8) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 8);
	}
	else if ((n % 8) < 6 && (n % 8) !=0)
	{
		printf("Last digit of %d is %d and is less than 6\n", n, n % 8);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 8);
	}
	return (0);
}
