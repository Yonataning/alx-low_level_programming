#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n - number to return factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
i{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * (factorial(n-1));
}
