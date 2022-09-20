#include "main.h"
/**
 * _puts - print string str
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (*(str + i) == '\0')
		{
			_putchar('\n');
			return;
		}
		else
		{
			_putchar(str[i]);
		}
	}
}
