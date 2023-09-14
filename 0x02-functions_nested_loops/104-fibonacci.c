#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long i = 1;
	unsigned long j = 2;
	unsigned long k = 0;
	int count = 0;

	printf("%lu, %lu, ", i, j);

	while (count < 96)
	{
		k = i + j;
		i = j;
		j = k;

		if (count == 95)
		{
			printf("%lu", k);
		} else
		{
			printf("%lu, ", k);
		}

		count++;
	}

	printf("\n");

	/** Return 0 to indicate success */
	return (0);
}
