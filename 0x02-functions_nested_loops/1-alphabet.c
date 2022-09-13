#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
