#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 9)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('9');

	return (0);
}
