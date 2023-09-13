#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, separated by commas.
 * Description: 'This program prints a message to the standard output.'
 * @n: The starting number.
 * Return: natural numbers
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			if (i < 10)
			{
				_putchar('0' + i);
			} else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}

	if (n < 10)
	{
		_putchar('0' + 98);
	} else
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
