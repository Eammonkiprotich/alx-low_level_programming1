#include <stdlib.h>
#include <stdio.h>

/**
 * main - This program prints number 1 to 10
 * 
 * Return: always return 0 when successful.
 */
int main(void)
{
	int n;

	for (n = 0; n < 11; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
