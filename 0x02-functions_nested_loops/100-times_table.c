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

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (j == 0)
				{
					_putchar('0' + result);
				} else
				{
					_putchar(',');
					_putchar(' ');
					if (result < 10)
					{
						_putchar(' ');
					} else
					{
						if (result > 99)
						{
							_putchar('0' + (result / 100) % 10);
						}
						_putchar('0' + result / 10);
					}
					_putchar('0' + result % 10);
				}
			}
			_putchar('\n');
		}
	}
}
