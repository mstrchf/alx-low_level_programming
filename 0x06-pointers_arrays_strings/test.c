#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	ptr = _strncat(s1, s2, 1);
	printf("%s", ptr);
	printf("%s", s1);

	ptr = _strncat(s1, s2, 1000);
	printf("%s", s1);
	printf("%s", ptr);

	return (0);
}
