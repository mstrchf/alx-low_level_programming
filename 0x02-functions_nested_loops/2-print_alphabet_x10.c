#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

