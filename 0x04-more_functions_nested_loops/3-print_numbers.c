#include "main.h"

/**
 * print_numbers - print numbers 1 to 9
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}

	_putchar('\n');
}
