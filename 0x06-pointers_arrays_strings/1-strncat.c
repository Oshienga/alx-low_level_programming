#include "main.h"

/**
 * _strncat - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @dest: first string
 * @src: second string
 * @n: number
 * Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
