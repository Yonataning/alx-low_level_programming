#include "main.h"
#include <stdio.h>

/**
 * main - Takes pointer to int as parameter & updates  value it points to 98
 *
 * Return: 0
 */
void reset_to_98(int *i);
int main(void)
{
	int i;

	i = 402;
	printf("i=%d\n", i);
	reset_to_98(&i);
	printf("i=%d\n", i);
	return (0);
}
