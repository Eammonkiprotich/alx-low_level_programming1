#include "../main.h"

/**
 * main - check code
 *
 * Return: 0
 */
int main(void)
{       
	int n;

	n = _islower('E');
	_putchar(n + '0');
	n = _islower('o');
	_putchar(n + '0');
	n = _islower(108);
	_putchar(n + '0');
	_putchar('\n');
	return (0);
}
