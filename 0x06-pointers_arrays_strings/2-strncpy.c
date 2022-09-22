#include "main.h"

/**
 * _strncpy - concatenates n bytes from string src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to add to dest
 *
 * Return: pointer - string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
