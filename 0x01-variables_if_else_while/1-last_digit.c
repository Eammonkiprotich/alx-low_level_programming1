#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - This program prints the last number of a random number n and whether
 * 	its greater than 5 or its less than 6 or equal to zero
 *
 * Return: Always returns 0 if the program is successful
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", 
				n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", 
				n, last_digit);
	else
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	return (0);
}
