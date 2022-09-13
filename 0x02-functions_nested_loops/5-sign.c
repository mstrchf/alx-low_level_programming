#include "main.h"
/**
 * print_sign - print sign of integer n
 * @n: integer to get sign of
 *
 * Return: 1 if n greater than zero (Success)
 * 0 if n equal zero (Success)
 * -1 if n less than zero (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
