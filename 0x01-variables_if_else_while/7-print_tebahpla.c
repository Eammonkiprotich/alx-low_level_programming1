#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet from z to a.
 *
 * Return: 0 is successful.
 */
int main(void)
{
	char var;

	for (var = 'z'; var >= 'a'; var--)
		putchar(var);
	putchar('\n');
	return (0);
}
