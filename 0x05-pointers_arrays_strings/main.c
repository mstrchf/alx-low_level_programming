#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	a = 50;
	b = 100;

	printf("a = %d - b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a = %d - b = %d\n", a, b);

	return (0);
}
