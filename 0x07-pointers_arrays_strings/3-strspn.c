#include "main.h"
/**
 * _strspn - get length of initial segment of s which 
 * consists entirely of bytes in accept
 * @accept string containing the characters to match
 * @s: string to be scanned
 *
 * Return: size_t, length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int i, j;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		int match;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
				match = 1;
			}
		}
		if (!match)
		{
			return (len);
		}
		match = 0;
	}

	return (len);
}

