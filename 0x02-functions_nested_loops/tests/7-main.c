#include "../main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	print_last_digit(98);
	print_last_digit(0);
	n = print_last_digit(-1024);
	_putchar('0' + n);
	_putchar('\n');
	return (0);
}
