#include "main.h"

/**
 * is_prime_number - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @n: first argument
 * Return: result
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}

/**
 * is_divisible - subfunction point
 * Description: 'This program prints a message to the standard output.'
 * @current: subfunction argument
 * Return: result
*/

	int is_divisible(int current)
	{
		if (current == 1)
		{
			return (1);
		}
		if (n % current == 0)
		{
			return (0);
		}
		return (is_divisible(current - 1));
	}

	return (is_divisible(n - 1));
}
