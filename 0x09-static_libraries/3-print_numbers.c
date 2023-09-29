#include "main.h"

/**
 * print_numbers - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 1 (Success)
*/

void print_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
