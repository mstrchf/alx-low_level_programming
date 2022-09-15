#include "main.h"

/**
 * more_numbers - print numbers 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int count, num;

	for (count = 0; num <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}

		_putchar('\n');
	}

	_putchar('\n');
}
