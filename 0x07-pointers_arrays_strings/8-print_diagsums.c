#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print sum of two diagonals of a square matrix of integers
 * @a: two-dimension array pointer
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* sum1 += a[i][i]; */
		sum1 += *(a[i] + size);
	}

	for (i = 0; i < size; i++)
	{
		/* sum2 += a[i][size - i - 1]; */
		sum2 += *(a[i] + (size - i - 1));
	}

	printf("%d, %d\n", sum1, sum2);
}
