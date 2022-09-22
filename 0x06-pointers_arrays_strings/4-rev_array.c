#include "main.h"
/**
 * reverse_array - reverse array items
 * @a: array pointer
 * @n: number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int temp[n];

	i = 0;
	while (n > 0)
	{
		temp[i] = a[n - 1];
		n--;
		i++;
	}

	j = 0;
	while (j < i)
	{
		a[j] = temp[j];
	}
}
