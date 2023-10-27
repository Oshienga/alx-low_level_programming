#include "main.h"

/**
 * set_bit - entry
 * Description: 'a program'
 * @n: arg
 * @index: arg
 * Return: result
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;

	*n |= mask;
	return (1);
}
