#include "main.h"
#include <stdio.h>
int main(void)
{
	printf("%d\n", _pow_recursion(1, 10));
	printf("%d\n", _pow_recursion(1024, 0));
	printf("%d\n", _pow_recursion(2, 16));
	printf("%d\n", _pow_recursion(5, 2));
	printf("%d\n", _pow_recursion(5, -2));
	printf("%d\n", _pow_recursion(-5, 3));
	return (0);
}
