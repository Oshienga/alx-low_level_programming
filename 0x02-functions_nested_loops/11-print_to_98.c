#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, separated by commas.
 * Description: 'This program prints a message to the standard output.'
 * @n: The starting number.
 * Return: natural numbers
 */

void print_to_98(int n)
{
	int i = n, neg = n < 98 ? -1 : 1;

	while (i != 98)
	{
		if (i * neg >= 10 || i == 0)
			_putchar('0' + i * neg / 10);
		_putchar('0' + i * neg % 10);
		_putchar(i == 98 ? '\n' : ',');
		if (i * neg < 98)
			_putchar(' ');
		i += neg;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
