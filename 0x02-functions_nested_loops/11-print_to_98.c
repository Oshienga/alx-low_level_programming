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
		if (i < 98)
		{
			if (i > 9)
			{
				_putchar('0' + (i / 10) % 10);
				_putchar('0' + i % 10);
			} else if (i < 0)
			{
				_putchar('-');
				if (i < -99)
					_putchar('0' + (-i / 100) % 10);
				if (i < -9)
					_putchar('0' + (-i / 10) % 10);
				_putchar('0' + (-i) % 10);
			} else
			{
				_putchar('0' + i % 10);
			}
			_putchar(i == 98 ? '\n' : ',');
			_putchar(' ');
			i++;
		} else
		{
			if (i > 99)
				_putchar('0' + (i / 100) % 10);
			_putchar('0' + (i / 10) % 10);
			_putchar('0' + i % 10);
			_putchar(i == 98 ? '\n' : ',');
			_putchar(' ');
			i--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
