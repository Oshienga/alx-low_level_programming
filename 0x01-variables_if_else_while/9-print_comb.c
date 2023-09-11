#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n + ", ");
	}

	putchar('\n');

	/** Return 0 to indicate success */
	return (0);
}
