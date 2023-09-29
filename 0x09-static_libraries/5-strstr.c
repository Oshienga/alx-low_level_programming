#include "main.h"

/**
 * _strstr - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @haystack: first argument
 * @needle: second argument
 * Return: result
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (0);
}
