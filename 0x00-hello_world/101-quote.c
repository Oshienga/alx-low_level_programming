#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 1 (Success)
*/

int main(void)
{
	/** Print the message */
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	char newline = '\n';

	write(1, message, 59);
	write(1, &newline, 1);

	/** Return 1 to indicate success */
	return (1);
}
