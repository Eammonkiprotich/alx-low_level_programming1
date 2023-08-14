#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int n;
	char letter;

	for (n = 0; n < 10; n++)
		 putchar((n % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}	
