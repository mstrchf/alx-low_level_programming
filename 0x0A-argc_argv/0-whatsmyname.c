#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; *(argv[argc - 1] + i) != '\0'; i++)
	{
		_putchar(*(argv[argc - 1] + i));
	}
	_putchar('\n');
	return (0);
}
