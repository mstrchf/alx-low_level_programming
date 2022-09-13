#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (succees)
 */

int main(void)
{
	int firstDigit, secondDigit;

	for (firstDigit = 0; firstDigit < 9; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit < 10; secondDigit++)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');
				
			if(firstDigit < 8 || secondDigit < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
