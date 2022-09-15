#include "main.h"

/**
 * print_triangle - print triangle
 * @size: height of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				_putchar(' ');
			}

			for (k = i + 1; k > 0; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
