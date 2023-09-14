#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	int fib[50];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	/** Calculate and store the first 50 Fibonacci numbers */
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	/** Print the first 50 Fibonacci numbers separated by comma and space */
	for (i = 0; i < 49; i++)
	{
		printf("%d, ", fib[i]);
	}

	printf("%d\n", fib[49]);

	/** Return 0 to indicate success */
	return (0);
}
