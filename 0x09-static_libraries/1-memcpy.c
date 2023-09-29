#include "main.h"

/**
 * _memcpy - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: result
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
