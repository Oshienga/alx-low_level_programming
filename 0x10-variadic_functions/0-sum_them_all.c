#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * Description: 'it is a program'
 * @n: The number of ints
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	va_list args;

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
