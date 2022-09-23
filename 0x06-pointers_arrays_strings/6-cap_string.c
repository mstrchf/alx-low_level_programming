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
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = s[i] - 32;
			}
			else
			{
				switch (s[i - 1])
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
						s[i] = s[i] - 32;
						break;
					default:
						break;
				}
			}
		}
		i++;
	}

	return (s);
}
