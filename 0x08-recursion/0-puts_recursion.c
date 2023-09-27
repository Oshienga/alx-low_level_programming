#include "main.h"

/**
 * _puts_recursion - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @s: first argument
 * Return: result
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
