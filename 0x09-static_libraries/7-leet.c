#include "main.h"

/**
 * leet - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @str: first argument
 * Return: string
*/

char *leet(char *str)
{
	char leet_map[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (int i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			int index = (c | 32) - 'a';

			if (index >= 0 && index < 26)
			{
				str[i] = leet_map[index];
			}
		}
	}

	return (str);
}
