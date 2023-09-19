#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 * Return: The integer value of the string.
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
