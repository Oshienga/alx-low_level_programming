#include "main.h"

/**
 * is_palindrome - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @s: first argument
 * Return: result
*/

int is_palindrome(char *s)
{
	int length;

/**
 * str_length - subfunction point
 * Description: 'This program prints a message to the standard output.'
 * @str: subfunction argument
 * Return: result
*/

	int str_length(char *str)
	{
		if (*str == '\0')
		{
			return (0);
		}
		return (1 + str_length(str + 1));
	}

/**
 * is_palindrome_helper - subfunction point
 * Description: 'This program prints a message to the standard output.'
 * @start: subfunction argument
 * @end: subfunction argument
 * Return: result
*/

	int is_palindrome_helper(char *start, char *end)
	{
		if (start >= end)
		{
			return (1);
		}
		if (*start != *end)
		{
			return (0);
		}
		return (is_palindrome_helper(start + 1, end - 1));
	}
	length = str_length(s);
	return (is_palindrome_helper(s, s + length - 1));
}
