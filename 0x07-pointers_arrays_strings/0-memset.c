#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 *
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
	*p = b;
	p++;
	n--;
	}
	return (s);
}
