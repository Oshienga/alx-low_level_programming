#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @s1: argument
 * @s2: argument
 * Return: Always 0 (Success)
*/

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
