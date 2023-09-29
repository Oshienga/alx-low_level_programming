#include "main.h"

/**
 * _memset - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @s: first argument
 * @b: second argument
 * @n: third argument
 * Return: result
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
