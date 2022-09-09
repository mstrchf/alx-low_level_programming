#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	for (; num < 9; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(9 + '0');
	write(1, "\n", 1);
	return (0);
}
