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

/**
 * _strlen - return the length of string s
 * @s: string
 *
 * Return: int, length of string s
 */

int _strlen(char *s)
{
	int i;
	int counter;

	counter = -1;
	for (i = 0; ; i++)
	{
		if (*(s + i) == '\0')
		{
			return (counter);
		}
		counter++;
	}
}
