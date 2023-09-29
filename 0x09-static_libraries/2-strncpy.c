#include "main.h"

/**
 * _strncpy - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @dest: first string
 * @src: second string
 * @n: number
 * Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}

	return (dest);
}
