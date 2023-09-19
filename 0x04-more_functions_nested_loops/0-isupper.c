#include "main.h"

/**
 * _isupper - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @c: The character to check.
 * Return: Always 1 (Success)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
