#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers from int n to 98
 * @n: input integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%i\n", n);
			}
			else
			{
				printf("%i, ", n);
			}

			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%i\n", n);
			}
			else
			{
				printf("%i, ", n);
			}

			n--;
		}
	}
}
