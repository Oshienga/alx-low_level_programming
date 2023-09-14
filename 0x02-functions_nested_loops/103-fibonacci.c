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
	long result = 0;

	while (k <= 4000000)
	{
		if (k % 2 == 0)
		{
			/** Fibonacci sequence */
			k = i + j;
			i = j;
			j = k;
			result += k;
		}
	}

	printf("%ld\n", result);

	/** Return 0 to indicate success */
	return (0);
}
