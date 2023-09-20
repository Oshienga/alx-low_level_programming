#include "main.h"

/**
 * _strcmp - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @s1: first string
 * @s2: second string
 * Return: string
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
