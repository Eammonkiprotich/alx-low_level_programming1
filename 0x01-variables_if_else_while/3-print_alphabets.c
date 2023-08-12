#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints a to z lowercase and uppercase
 *
 * Return: Always 0 if successful
 */
int main(void)
{
        char array1[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k','l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x',
		'y', 'z'};
	char array2[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X','Y', 'Z'};
	int n;
	char nl;

	for (n = 0; n <= 25; n++)
		putchar(array1[n]);
	for (n = 0; n <= 25; n++)
		putchar(array2[n]);
	nl = '\n';
	putchar(nl);
	return (0);
}
