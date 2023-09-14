#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int result = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			result += i;
		}
	}

	printf("%d", result);
	printf("\n");

	/** Return 0 to indicate success */
	return (0);
}
