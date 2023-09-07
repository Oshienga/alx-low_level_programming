#include <unistd.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 1 (Success)
*/

int main(void)
{
	/** Print the message */
	const char *message = "and that piece of art is useful\n";

	write(1, message, 32);

	/** Return 1 to indicate success */
	return (1);
}
