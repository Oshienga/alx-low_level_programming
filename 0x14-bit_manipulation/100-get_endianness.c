#include "main.h"

/**
 * get_endianness - entry
 * Description: 'a program'
 *
 * Return: result
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian_check = (char *)&num;

	if (*endian_check == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
