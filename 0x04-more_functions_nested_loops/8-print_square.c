#include "main.h"

/**
 * print_square - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @size: input
 * Return: Always 1 (Success)
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
