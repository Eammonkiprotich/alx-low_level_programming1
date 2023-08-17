#include "../main.h"

/**
 * main - check code
 *
 * Return: 0
 */
int main(void)
{       
	int n;

	n = _isalpha('E');
	_putchar(n + '0');
	n = _isalpha('o');
	_putchar(n + '0');
	n = _isalpha(108);
	_putchar(n + '0');
	n = _isalpha(';');
	_putchar(n + '0');
	_putchar('\n');
	return (0);
}    
