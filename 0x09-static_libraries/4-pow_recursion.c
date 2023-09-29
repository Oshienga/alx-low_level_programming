#include "main.h"

/**
 * _pow_recursion - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @x: first argument
 * @y: second argument
 * Return: result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
