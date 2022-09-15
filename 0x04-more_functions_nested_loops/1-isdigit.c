#include "main.h"

/**
 * _isdigit - checks if char c is digit
 * @c: character to check
 *
 * Return: 1 if char is digit
 * else 0
 */

int _isdigit(int c)
{
	if ((int)c >= 48 && (int)c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
