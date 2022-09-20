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

	str = "Hello, world!";
	rev_string(str);
	printf("%s\n", str);
	
	return (0);
}
