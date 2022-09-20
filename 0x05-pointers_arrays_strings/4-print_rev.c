#include "main.h"
/**
 * print_rev - print string s in reverse;
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
