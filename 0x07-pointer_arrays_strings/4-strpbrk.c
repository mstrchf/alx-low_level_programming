#include "main.h"
/**
 * _strpbrk - locate first occurence in the string s in string accept
 * @s: string to be scanned
 * @accept: string
 *
 * Return: pointer, first occurence of char in accept found in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return ('\0');
}
