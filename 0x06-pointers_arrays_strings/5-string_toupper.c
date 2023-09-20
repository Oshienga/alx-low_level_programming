#include "main.h"

/**
 * string_toupper - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @str: first argument
 * Return: string
*/

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
