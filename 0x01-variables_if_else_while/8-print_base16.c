#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	char ch;

	/* prints number part */
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	/* print letters part */
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
