#include "main.h"
/**
 * cap_string - capitalize all words to upper
 * @s: string
 *
 * Return: string pointer
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	
	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
				break;
			default:
				break;
		}

		i++;
	}

	return (s);
}
