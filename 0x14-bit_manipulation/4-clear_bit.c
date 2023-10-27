#include "main.h"

/**
 * clear_bit - entry
 * Description: 'a program'
 * @n: arg
 * @index: arg
 * Return: result
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num_bits = 64;

	if (index >= num_bits)
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;

	*n &= ~mask;
	return (1);
}
