#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the the last digit followed by an option is it is less or greater than 5
 *
 * Return: the program returns 0 if successful
 */
int main(void)
{
	int n;
	int last_digit;
	char array[];
	int arrayLength;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(array, "%d", n);
	arrayLength = sizeof(myArray) / sizeof(myArray[0]);
	last_digit = array[arrayLength -1];
	
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	else
		printf("Last digit of %d is %d and is 0", n, last_digit);
	return (0);
}
