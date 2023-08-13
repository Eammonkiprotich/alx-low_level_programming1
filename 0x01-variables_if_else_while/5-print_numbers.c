#include <stdlib.h>
#include <stdio.h>

/**
 * main - This program prints number 1 to 10
 * 
 * Return: always return 0 when successful.
 */
int main(void)
{
	char n;
	int a;
	char nl;

	a = 0;
	for (n = '0'; n < 10; n++)
	{
		putchar(a);
		a++;
	}
	nl = '\n';
	putchar(nl);
	return (0);
}
