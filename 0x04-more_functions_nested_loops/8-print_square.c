#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
