#include "main.h"
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

	counter = 0;
	for (i = 0; ; i++)
	{
		if (*(s + i) == '\0')
		{
			return (counter);
		}
		counter++;
	}
}
