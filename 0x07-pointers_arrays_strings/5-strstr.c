#include "main.h"
/**
 * _strstr - find first occurence of needle in haystack
 * @needle: substring to find
 * @haystack: string to search substring
 *
 * Return: pointer to substring or null pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		int j;

		for (j = 0; needle[j] == haystack[i] && needle[j] != '\0'; j++)
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i - j]);
			}
			i++;
		}
		i++;
	}

	return ('\0');
}
