#include "main.h"

/**
 * sqrt_helper - subfunction point
 * Description: 'This program prints a message to the standard output.'
 * @n: subfunction argument
 * @guess: subfunction argument
 * Return: result
*/

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}

	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @n: first argument
 * Return: result
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrt_helper(n, 1));
}
