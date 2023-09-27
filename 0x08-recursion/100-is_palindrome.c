#include "main.h"

/**
 * is_palindrome_helper - subfunction point
 * Description: 'This program prints a message to the standard output.'
 * @left: subfunction argument
 * @right: subfunction argument
 * Return: result
*/

bool is_palindrome_helper(char *left, char *right)
{
	if (left >= right)
	{
		return (true);
	}
	if (*left != *right)
	{
		return (false);
	}
	return (is_palindrome_helper(left + 1, right - 1));
}

/**
 * is_palindrome - main point
 * Description: 'This program prints a message to the standard output.'
 * @s: subfunction argument
 * Return: result
*/

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (true);
	}
	return (is_palindrome_helper(s, s + length - 1));
}
