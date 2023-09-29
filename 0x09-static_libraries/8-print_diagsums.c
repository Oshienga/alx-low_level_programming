#include <stdio.h>

/**
 * print_diagsums - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @a: first argument
 * @size: second argument
 * Return: result
*/

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
