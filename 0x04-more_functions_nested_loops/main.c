#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 * Return: Alvays 0 (Success)
 */
int main(void)
{
	print_triangle(0);
	print_triangle(2);
	print_triangle(10);
	print_triangle(-4);
	print_triangle(1);
	return (0);


}

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

/**
 * print_square - print square
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;
	
	if (size <= 0)
	{
		_putchar('\n');
	}

        for (i = 0; i < size; i++)
        {
		for (j = 0; j < size; j++)
                {
                        _putchar('#');
                }
                _putchar('\n');
        }
}

/**
 * more_numbers - print numbers 0 to 14
 * Return: void
 */

void more_numbers(void)
{
        int count, last_digit, num;

        for (count = 0; count <= 9; count++)
        {
                for (num = 0; num <= 14; num++)
                {
                        if (num >= 10)
                        {
                                _putchar('1');
                        }

                        last_digit = num % 10;
                        _putchar(last_digit + '0');
                }
                _putchar('\n');
        }
}

/**
 * print_diagonal - print diagonal line
 * @n: number of lines
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;
        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
		for (i = 0; i < n; i++)
		{
                	for (j = n - i; j < n; j++)
                	{
                        	_putchar(' ');
                	}
			_putchar('\\');
			_putchar('\n');
		}
        }
}

/**
 * print_line - print char n number of times
 * @n: number of times to print char
 *
 * Return: void
 */
void print_line(int n)
{
	int i;
        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (i = 0; i < n; i++)
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
