#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char str[10] = "My School";

	rev_string(str);
	printf("%s\n", str);
	
	return (0);
}
