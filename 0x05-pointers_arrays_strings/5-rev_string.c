#include "main.h"

/**
 * rev_string - Prints a string in reverse.
 * @s: A pointer to the string to be printed in reverse.
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	int j;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
	_putchar('\0');
}
