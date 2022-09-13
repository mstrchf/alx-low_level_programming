#include "main.h"
/**
 * print_last_digit - print last digit of number n
 * @n: number to get last digit from
 *
 * Return: integer, last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
