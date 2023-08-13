#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int array[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int n;
	char nl;
	
	for ( n = 0; n < 10; n++)
		putchar(array[n]);
	nl = '\n';
	putchar(nl);
