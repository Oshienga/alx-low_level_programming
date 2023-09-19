#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @n: the number of lines
 * Return: Always 1 (Success)
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
