#include "main.h"
/**
 * _strlen - return the length of string s
 * @s: string
 *
 * Return: int, length of string s
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}

	return (counter);
}
