#include "main.h"

/**
 * _strspn - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @s: first argument
 * @accept: second argument
 * Return: result
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s != '\0')
	{
		found = 0;
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
