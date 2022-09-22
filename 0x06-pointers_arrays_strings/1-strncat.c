#include "main.h"

/* function prototypes */
int _strlen(char *s);

/**
 * _strncat - concatenates n bytes from string src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to add to dest
 *
 * Return: pointer - string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, size;

	i = 0;
	j = 0;
	size = _strlen(src);

	while (dest[i] != '\0')
	{
		i++;
	}

	if (size < n)
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}

		dest[i] = '\0';
	}
	else
	{

		while (j < n)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}

	return (dest);
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
