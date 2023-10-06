#include <stdlib.h>

/**
 * malloc_checked - entry
 * Description: 'This program allocates memory'
 * @b: Size of memory to allocate
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		while (1)
		{
			exit(98);
		}
	}

	return (ptr);
}
