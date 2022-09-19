#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int num;

	num = 100;
	printf("num before change through pointer: %d\n", num);
	reset_to_98(&num);
	printf("num after pointer manipulation: %d\n", num);

	return (0);
}

void reset_to_98(int *n)
{
	*n = 98;
}
