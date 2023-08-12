#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints a to z in lowercase
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	char array[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
	     	'p','q','r','s','t','u','v','w','x','y','z'};
	int n;

	for (n = 0; n<=25; n++)
		putchar(array[n]);
	putchar(\n);
	return (0);
}
