#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char *str;
	int len;

	str = "Hello";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
