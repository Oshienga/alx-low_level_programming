#include "main.h"

/**
 * _strcat - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @dest: first string
 * @src: second string
 * Return: string
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
