#include "main.h"

/**
 * print_times_table - Prints the 9 times table starting with 0.
 * Description: 'This program prints a message to the standard output.'
 * @n: The number to check.
 * Return: times table
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && i <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				result = i * j;

				if (j == 0)
				{
					_putchar(result + '0');
				} else
				{
					_putchar(',');
					_putchar(' ');
					if (result < 10)
					{
						_putchar(' ');
					} else
					{
						_putchar(result / 10 + '0');
					}
					_putchar(result % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
