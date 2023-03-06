#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: bytes of the memory area
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
