#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	long i = 1;
	long j = 2;
	long k = 0;
	int count = 0;

	printf("%ld, %ld, ", i, j);

	while (count < 48)
	{
		k = i + j;
		i = j;
		j = k;

		if (count == 47)
		{
			printf("%ld", k);
		} else
		{
			printf("%ld, ", k);
		}

		count++;
	}

	printf("\n");

	/** Return 0 to indicate success */
	return (0);
}
