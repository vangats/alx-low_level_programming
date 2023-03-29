#include "main.h"

/**
 * _strncat - a function that concatenates 2 strings
 * @dest: copy to
 * @src: copy from
 * @n: n
 *
 * Return: 1 or 0
 */
char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
