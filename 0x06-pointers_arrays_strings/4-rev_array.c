#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: the tab integer
 * @n: the number of elements of the array
 *
 * Return: 1 or 0
 */

void reverse_array(int *a, int n)
{
	int i = 0, taille, k;
	int c;

	taille = n - 1;
	k = taille / 2;

	while (i <= k)
	{
		c = a[i];
		a[i] = a[taille];
		a[taille] = c;
		i++;
		taille--;
	}
}
