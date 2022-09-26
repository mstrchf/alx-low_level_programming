#include "main.h"
/**
 * _strchr - return pointer to the first occurence of
 * the character c in the string s
 *
 * @s: string
 * @c: character
 * Return: pointer to first occurence of c
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}

