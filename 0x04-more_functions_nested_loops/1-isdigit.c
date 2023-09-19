#include "main.h"

/**
 * _isdigit - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @c: The character to check.
 * Return: Always 1 (Success)
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
