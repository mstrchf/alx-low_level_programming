#include "main.h"

/* function prototypes */
int _strlen(char *s);

/**
 * _strcmp - compares strings s1 and s2
 * @s1: string
 * @s2: string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = _strlen(s1);
	int k = _strlen(s2);
	int bigger;

	if (i < k)
	{
		bigger = k;
	}
	else if (i > k)
	{
		bigger = i;
	}
	else
	{
		bigger = i;
	}
	for (i = 0; i < bigger; i++)
	{
		if (s1[i] == s2[i])
		{
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
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

	return (counter + 1);
}
