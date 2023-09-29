#include "main.h"

/**
 * reverse_array - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @a: first argument
 * @n: second argument
 * Return: string
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
