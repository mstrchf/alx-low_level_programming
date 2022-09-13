#include "main.h"
/**
 * _islower - checks for case of input char c
 * @c: The character to print
 *
 * Return: true 1 (Success)
 * false 0
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
