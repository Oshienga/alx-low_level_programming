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

	while (count < 50)
	{
		k = i + j;
		printf("%d, %d, %d, ", i, j, k);
		i = j;
		j = k;
		count++;
	}

	printf("\n");

	/** Return 0 to indicate success */
	return (0);
}
