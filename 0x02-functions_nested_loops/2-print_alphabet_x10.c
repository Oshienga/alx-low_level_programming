#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 1 (Success)
*/

void print_alphabet_x10(void)
{
	/** Print the message */
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}

	return (0);
}
