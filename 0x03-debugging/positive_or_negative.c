#include "main.h"

/**
* positive_or_negative - checks if given number is +, - or 0
* @j: number to be checked
* Return: nothing success
*/
void positive_or_negative(int j)
{
	if (j > 0)
		printf("%d is positive\n", j);
	else if (j < 0)
		printf("%d is negative\n", j);
	else
		printf("%d is zero\n", j);
}
