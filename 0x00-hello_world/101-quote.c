#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints and that piece of art is useful
 * Return: Always 1 When successful
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
