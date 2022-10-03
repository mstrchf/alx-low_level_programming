#include <stdlib.h>
/**
 * str_concat - concat strings s1 and s2
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL of new string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *joined;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (size1 = 0; s1[size1]; size1++)
	{
	}

	for (size2 = 0; s2[size2]; size2++)
	{
	}

	size2 += 1;

	joined = malloc(size1 + size2);

	if (joined != NULL)
	{
		for (i = 0; i < size1; i++)
		{
			joined[i] = s1[i];
		}

		for (i = 0; i < size2; i++)
		{
			joined[i + size1] = s2[i];
		}
	}

	return (joined);
}
