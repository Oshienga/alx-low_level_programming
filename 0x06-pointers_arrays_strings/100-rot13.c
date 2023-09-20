#include "main.h"

/**
 * rot13 - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @str: first argument
 * Return: string
*/

char *rot13(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];
		char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			str[i] = (((c - base + 13) % 26) + base);
		}
	}

	return (str);
}
