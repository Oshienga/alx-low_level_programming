#include "main.h"

/**
 * print_binary - entry
 * Description: 'a program'
 * @n: arg
 * Return: result
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
