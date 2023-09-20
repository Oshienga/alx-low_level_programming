#include "main.h"

/**
 * infinite_add - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @n1: first argument
 * @n2: second argument
 * @r: third argument
 * @size_r: fourth argument
 * Return: string
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int index1 = 0, index2 = 0, result_index = 0;

	while (n1[index1] != '\0' || n2[index2] != '\0' || carry != 0)
	{
		int digit1 = (n1[index1] != '\0') ? n1[index1] - '0' : 0;
		int digit2 = (n2[index2] != '\0') ? n2[index2] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;

		int digit_sum = sum % 10;

		if (result_index < size_r - 1)
		{
			r[result_index] = digit_sum + '0';
		}
		else
		{
			return (0);
		}

		if (n1[index1] != '\0')
			index1++;
		if (n2[index2] != '\0')
			index2++;

		result_index++;
	}

	r[result_index] = '\0';

	return (r);
}
