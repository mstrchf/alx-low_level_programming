#include "main.h"
/**
 * factorial - calculate factorial of n
 * @n: integer
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
