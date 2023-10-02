#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @str: argument
 * Return: Always 0 (Success)
*/

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char *duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
