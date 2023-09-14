#include <stdio.h>
#include <inttypes.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	int64_t i = 1;
	int64_t j = 2;
	int64_t k = 0;
	int count = 0;

	printf("%" PRId64 ", %" PRId64 ", ", i, j);

	while (count < 96)
	{
		k = i + j;
		i = j;
		j = k;

		if (count == 95)
		{
			printf("%ld", k);
			printf("%" PRId64, k);
		} else
		{
			printf(", %" PRId64, k);
		}

		count++;
	}

	printf("\n");

	/** Return 0 to indicate success */
	return (0);
}
