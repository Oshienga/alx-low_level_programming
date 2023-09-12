#include <unistd.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 1 (Success)
*/

int main(void)
{
	/** Print the message */
	char message[] = "_putchar\n";

	write(1, message, sizeof(message) - 1);

	/** Return 1 to indicate success */
	return (0);
}
