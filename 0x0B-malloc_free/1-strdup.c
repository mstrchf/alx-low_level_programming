#include <stdlib.h>
/**
 * _strdup - return duplicate of string str
 *@str: string
 *
 * Return: duplicate string or NULL
 */
char *_strdup(char *str)
{
	unsigned long int i;
	char *dup = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc(sizeof(str));

	if (dup != NULL)
	{
		for (i = 0; i < sizeof(str); i++)
		{
			dup[i] = str[i];
		}
	}

	return (dup);
}
