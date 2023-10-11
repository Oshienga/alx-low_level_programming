#include "3-calc.h"

/**
 * op_add - Entry point
 * Description: 'it is a program'
 * @a: first argument
 * @b: second argument
 * Return: result
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 * Description: 'it is a program'
 * @a: first argument
 * @b: second argument
 * Return: result
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Entry point
 * Description: 'it is a program'
 * @a: first argument
 * @b: second argument
 * Return: result
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 * Description: 'it is a program'
 * @a: first argument
 * @b: second argument
 * Return: result
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a / b);
}

/**
 * op_mod - Entry point
 * Description: 'it is a program'
 * @a: first argument
 * @b: second argument
 * Return: result
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a % b);
}
