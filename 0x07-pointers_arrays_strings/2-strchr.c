#include "main.h"

/**
 * _strchr - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @s: first argument
 * @c: second argument
 * Return: result
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
