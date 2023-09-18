#include "main.h"

/**
 * rev_string - Prints a string in reverse.
 * @s: A pointer to the string to be printed in reverse.
 */

void rev_string(char *s)
{
	int length = _strlen(char *s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
