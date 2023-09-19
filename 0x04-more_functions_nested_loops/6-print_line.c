#include "main.h"

/**
 * print_line - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @n: The number of lines
 * Return: Always 1 (Success)
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
