#include "main.h"

/**
 * str_length - subfunction point
 * Description: 'This program prints a message to the standard output.'
 * @s: subfunction argument
 * Return: result
*/

int str_length(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * is_palindrome - main point
 * Description: 'This program prints a message to the standard output.'
 * @s: subfunction argument
 * Return: result
*/

int is_palindrome(char *s)
{
	int length;
	int i;

	length = str_length(s);

	if (length == 0)
	{
		return (1);
	}

	for (i = 0; i < length / 2; i++)
	{
		if (s[i] != s[length - 1 - i])
		{
			return (0);
		}
	}
	return (1);
}
