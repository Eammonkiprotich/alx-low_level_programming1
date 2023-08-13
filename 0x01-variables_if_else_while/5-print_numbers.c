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
	char nl;

	for (n = 0; n < 10; n++)
	{
		n = char(n);
		putchar(n);
	}
	nl = '\n';
	putchar(nl);
	return (0);
}
