#include "main.h"
#include <stddef.h>

/**
 * print_number - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @n: argument
 * Return: Always 0 (Success)
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @argc: argument
 * @argv: argument
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int count = 0;

	while (argv[count] != NULL)
	{
		count++;
	}

	count--;
	print_number(count);
	_putchar('\n');
	return (0);
}
