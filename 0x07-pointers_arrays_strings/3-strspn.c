#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the pointer to the string to search
 * @accept: the pointer to a string of characters to accept
 *
 * Return: 1 or 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *s_ptr = s;

	while (*s_ptr != '\0' && strchr(accept, *s_ptr) != NULL)
	{
	count++;
	s_ptr++;
	}
	return (count);
}
