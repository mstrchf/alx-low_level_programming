#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: int 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
