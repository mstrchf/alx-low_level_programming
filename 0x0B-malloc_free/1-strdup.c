#include <stdlib.h>
/**
 * _strdup - return duplicate of string str
 *@str: string
 *
 * Return: duplicate string or NULL
 */
char *_strdup(char *str)
{
	int size, i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size]; size++)
	{
	}

	size += 1;

	dup = malloc(size);

	if (dup != NULL)
	{
		for (i = 0; i < size + 1; i++)
		{
			dup[i] = str[i];
		}
	}

	return (dup);
}
