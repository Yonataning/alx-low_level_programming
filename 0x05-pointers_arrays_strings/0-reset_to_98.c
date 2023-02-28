#include "main.h"
#include <stdio.h>

void reset_to_98(int *ptr)
{
	*ptr = 98;
}
/**
 * main - Takes pointer to int as parameter & updates  value it points to 98
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int *ptr = &i;

	i = 402;
	printf("ptr=%d\n", *ptr);
	reset_to_98(ptr);
	printf("ptr=%d\n", *ptr);
	return (0);
}
