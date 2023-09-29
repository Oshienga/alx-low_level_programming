#include "main.h"

/**
 * _strpbrk - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @s: first argument
 * @accept: second argument
 * Return: result
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
