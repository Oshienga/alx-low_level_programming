#include "main.h"

/**
 * _strlen_recursion - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @s: first argument
 * Return: result
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
