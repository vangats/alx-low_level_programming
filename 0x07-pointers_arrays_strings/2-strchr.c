#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: a pointer to the string to search
 * @c: the character to search for
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')

	{
	if (*s == c)
	{
		return (s);
	}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
