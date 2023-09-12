#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * Description: 'This program prints a message to the standard output.'
 * @n: The integer to compute the absolute value of.
 *
 * Return: The absolute value of n.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
