#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @ac: argument
 * @av: argument
 * Return: Always 0 (Success)
*/

char *argstostr(int ac, char **av)
{
	int i, index, total_length;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			total_length++;
			arg++;
		}
		total_length++;
	}
	result = (char *)malloc(total_length + 1);

	if (result == NULL)
		return (NULL);
	index = 0;

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			result[index++] = *arg;
			arg++;
		}
		result[index++] = '\n';
	}
	result[index] = '\0';
	return (result);
}
