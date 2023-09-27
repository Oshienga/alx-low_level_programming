#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @s: first argument
 * Return: result
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
