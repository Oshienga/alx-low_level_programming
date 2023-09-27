#include "main.h"

/**
 * factorial - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @n: first argument
 * Return: result
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
