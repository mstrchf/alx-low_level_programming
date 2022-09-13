#include "main.h"
/**
 * times_table - print 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	if (n < 0 || n > 15)
	{
	}
	else
	{
		int row, col;

		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				int result;

				result = row * col;
				if (result >= 100)
				{
					print_3(result);
				}

				else if (result >= 10)
				{
					print_2(result);
				}
				else
				{
					if (col > 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(result + '0');
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * print_3 - print 3 digits
 * @result: input
 *
 * Return: void
 */
void print_3(int result)
{
	int last_digit, last_two_digits, first_digit, second_digit;

	last_digit = result % 10;
	last_two_digits = result % 100;
	first_digit = (result - last_two_digits) / 100;
	second_digit = (last_two_digits - last_digit) / 10
	_putchar(',');
	_putchar(' ');
	_putchar(first_digit + '0');
	_putchar(second_digit + '0');
	_putchar(last_digit + '0');
}

/**
 * print_2 - print 2 digits
 * @result: input
 *
 * Return: void
 */
void print_2(int result)
{
	int last_digit, first_digit;

	last_digit = result % 10;
	first_digit = result - last_digit;
	first_digit = first_digit / 10;
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(first_digit + '0');
	_putchar(last_digit + '0');
}
