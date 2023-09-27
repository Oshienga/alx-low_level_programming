#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @n: first argument
 * Return: result
*/

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}

/**
 * check_sqrt - subfunction point
 * Description: 'This program prints a message to the standard output.'
 * @current: subfunction argument
 * Return: result
*/
	int check_sqrt(int current)
	{
		if (current * current >= n)
		{
			if (current * current == n)
			{
				return (current);
			}
			return (-1);
		}
		return (check_sqrt(current + 1));
	}

	return (check_sqrt(1));
}
