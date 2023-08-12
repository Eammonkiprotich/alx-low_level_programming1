#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print whether the number is positive or negative
 *
 * Return: always returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ( n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else 
		printf("is 0\n");
	return (0);
}
