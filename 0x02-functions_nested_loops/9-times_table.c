#include "main.h"
/**
 * times_table - print 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int result;

			result = row * col;

			if (result >= 10)
			{
				int last_digit, first_digit;

				last_digit = result % 10;
				first_digit = result - last_digit;
				first_digit = first_digit / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(first_digit + '0');
				_putchar(last_digit + '0');
			}
			else
			{
				if (col > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
		}

		_putchar('\n');
	}
}

