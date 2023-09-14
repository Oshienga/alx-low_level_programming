#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 1;
	int j = 2;
	int k = 0;
	int count = 0;

	printf("%d, %d, ", i, j);

	while (count < 48)
	{
		k = i + j;
		i = j;
		j = k;

		if (count == 47)
		{
			printf("%d", k);
		} else
		{
			printf("%d, ", k);
		}

		count++;
	}

	printf("\n");

	/** Return 0 to indicate success */
	return (0);
}
