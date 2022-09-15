#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of lines
 *
 * Return: void
 */
void print_diagonal(int n)
{
        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (int i = 1; i <= n; i++)
                {       int j;
                        for (j = n - i; j < n; j++)
                        {
                                _putchar(' ');
                        }
                        _putchar('\\');
                        _putchar('\n');
                }
        }
}
