#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char s1[98];
	char s2[] = "World!\n";
	char *ptr;

	ptr = _strncpy(s1, s2, 1);
	printf("%s", ptr);
	printf("%s", s1);

	ptr = _strncpy(s1, s2, 50);
	printf("%s", s1);
	printf("%s", ptr);

	return (0);
}
