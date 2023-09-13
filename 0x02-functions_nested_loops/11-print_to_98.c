#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, separated by commas.
 * Description: 'This program prints a message to the standard output.'
 * @n: The starting number.
 * Return: natural numbers
 */

void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		_putchar(48 + (i / 10) % 10);
		_putchar(48 + i % 10);
		_putchar(i == 98 ? '\n' : ', ');
		if (i < 98)
			i++;
		else
			i--;
	}
	_putchar('9');
	_putchar('8');
}
