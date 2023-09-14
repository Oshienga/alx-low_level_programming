#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned int i = 1;
	unsigned int j = 2;
	unsigned int k = 0;
	int count = 0;

	printf("%u, %u, ", i, j);

	while (count < 96)
	{
		k = i + j;
		i = j;
		j = k;

		if (count == 95)
		{
			printf("%u", k);
		} else
		{
			printf("%u, ", k);
		}

		count++;
	}

	printf("\n");

	/** Return 0 to indicate success */
	return (0);
}
