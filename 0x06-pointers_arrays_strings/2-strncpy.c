#include "main.h"

/**
 * _strncpy - a function ...
 * @dest: The destination of the string
 * @src: The source of the string
 * @n: The length of the string
 *
 * Return: 1 or 0
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
