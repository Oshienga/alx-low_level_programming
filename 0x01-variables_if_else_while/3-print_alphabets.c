#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter, letter_u;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter_u = 'A'; letter_u <= 'Z'; letter_u++)
	{
		putchar(letter_u);
	}

	putchar('\n');

	/** Return 0 to indicate success */
	return (0);
}
