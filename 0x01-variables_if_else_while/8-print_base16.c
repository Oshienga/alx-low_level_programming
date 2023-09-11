#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter;
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	/** Return 0 to indicate success */
	return (0);
}
