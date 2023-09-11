#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int n_last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_last = n % 10;

	if (n > 0)
	{
		if (n_last == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, n_last);
		} else
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, n_last);
		}
	} else if (n < 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_last);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, n_last);
	}

	/** Return 0 to indicate success */
	return (0);
}
