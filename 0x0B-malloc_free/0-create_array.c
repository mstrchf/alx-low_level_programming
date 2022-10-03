#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of size initialized with chars c
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: Null or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = NULL;

	if (size <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}

	return (arr);
}
