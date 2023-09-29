#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @b: first argument
 * @size: second argument
 * Return: string
*/

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", (unsigned char)b[i + j]);
			}
			else
			{
				printf("  ");
			}

			if (j % 2 == 1)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
				{
					printf("%c", b[i + j]);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
