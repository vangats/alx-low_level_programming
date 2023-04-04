#include <string.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the pointer to the string to search
 * @accept: the pointer to a string of characters to accept
 *
 * Return: 1 or 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{

	char *a_ptr = accept;

	while (*a_ptr != '\0')
	{
	if (*s == *a_ptr)
	{
		return (s);
	}
	a_ptr++;
	}
	s++;
	}

	return (NULL);
}
