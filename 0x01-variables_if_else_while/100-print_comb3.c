#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of 2 digits,
 * 	in ascending order comma qnd sspace
 *
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2;

	fot (num1 = 0; num1 <9; num1++)
	{
		for (num1 = num2 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
