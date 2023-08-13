#include <stdlib.h>
#include <stdio.h>

/**
 * main - This program prints number 1 to 10
 * 
 * Return: always return 0 when successful.
 */
int main(void)
{
	int n[10];
	int a;
	char nl;

	n =['0', '1', '2', '3', '4', '5', '6', '7', '8', '9'];

	for (a = 0; a < 10; a++)
		putchar(n[a]);
	nl = '\n';
	putchar(nl);
	return (0);
}
