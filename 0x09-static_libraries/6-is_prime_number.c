#include "main.h"

/**
 * is_prime_helper - subfunction point
 * Description: 'This program prints a message to the standard output.'
 * @n: subfunction argument
 * @divisor: subfunction argument
 * Return: result
*/

int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - main point
 * Description: 'This program prints a message to the standard output.'
 * @n: subfunction argument
 * Return: result
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (is_prime_helper(n, 2));
}
