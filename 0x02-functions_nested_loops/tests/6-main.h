#include "../main.h"
#include <stdio.h>

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = _abs(-1);
	printf("%d\n", n);
	n = _abs(0);
	printf("%d\n", n);
	n = _abs(1);
	printf("%d\n", n);
	n = _abs(-98);
	printf("%d\n", n);
	return (0);
}
