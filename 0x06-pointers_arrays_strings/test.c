#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0i
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	ptr = _strcat(s1, s2);
	printf("%s", ptr);
	return (0);
}
