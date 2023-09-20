#include "main.h"

/**
 * print_number - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @n: first argument
 * Return: string
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor = 1;
	int temp = n;

	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor >= 1)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
