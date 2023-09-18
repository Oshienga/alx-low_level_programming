#include "main.h"

/**
 * rev_string - Prints a string in reverse.
 * @s: A pointer to the string to be printed in reverse.
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
