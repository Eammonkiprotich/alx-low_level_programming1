#include <stdlib.h>
#include <stdio/h>

/**
 * main - prints num 0 to 10 only using putchar without char variables
 *
 * Return: Always returns 0 if successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num %10) + '0');
	putchar('\n');
	return (0);
}
