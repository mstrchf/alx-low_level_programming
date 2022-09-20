#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: char
 * @src: char
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
