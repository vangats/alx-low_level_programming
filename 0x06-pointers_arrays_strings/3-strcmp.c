#include "main.h"

/**
 * _strcmp - a function ...
 * @s1: Input 1
 * @s2: Input 2
 *
 * Return: 1 or 0
 */

int	_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (s1 == s2)
		return (0);
	else
		return ((int)*s1 - (int)*s2);
}
