#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: char
 */

void puts_half(char *str)
{
	int i;
	
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	i = i + 1;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
