#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 * Return: Alvays 0 (Success)
 */

int main(void)
{
	print_line(10);
	print_line(5);
	print_line(0);
	return (0);
}

/**
 * print_line - print char n number of times
 * @n: number of times to print char
 *
 * Return: void
 */

void print_line(int n)
{
        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (int i = 0; i < n; i++)
                {
                        _putchar('_');
                }

                _putchar('\n');
        }
}

/**
 * print_most_numbers - print numbers 0 to 9 excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
		}
		else
		{
			_putchar(num + '0');
		}
	}

	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
