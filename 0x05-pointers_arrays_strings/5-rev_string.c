#include "main.h"
/**
 * rev_string - reverses a string s
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int size, i, j;
	char temp[_strlen(s)];

	size = _strlen(s);
	i = 0;
	while (size > 0)
	{
		temp[i] = s[size - 1];
		size--;
		i++;
	}

	j = 0;
	while( j < i)
	{
		s[j] = temp[j];
		j++;
	}	
}	
