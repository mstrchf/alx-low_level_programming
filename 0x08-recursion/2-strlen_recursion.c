#include "main.h"
/**
 * _strlen_recursion - recursively print string s in reverse
 * @s: string pointer
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
