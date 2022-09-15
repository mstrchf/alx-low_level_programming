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
			if (num >= 10)
			{
				_putchar('1');
			}
			int last_digit;

			last_digit = num % 10;
			_putchar(last_digit + '0');
		}
		_putchar('\n');
	}
}
