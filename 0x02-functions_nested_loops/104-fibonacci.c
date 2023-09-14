#include <stdio.h>
#include <inttypes.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	uint64_t i = 1;
	uint64_t j = 2;
	uint64_t k = 0;
	int count = 0;

	printf("%" PRIu64 ", %" PRIu64, i, j);

	while (count < 96)
	{
		k = i + j;
		i = j;
		j = k;

		if (count == 95)
		{
			printf("%ld", k);
			printf("%" PRIu64, k);
		} else
		{
			printf(", %" PRIu64, k);
		}

		count++;
	}

	printf("\n");

	/** Return 0 to indicate success */
	return (0);
}
