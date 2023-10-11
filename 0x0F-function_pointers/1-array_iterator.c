#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Entry point
 * Description: 'it is a program'
 * @array: first argument
 * @size: second argument
 * @action: third argument
 * Return: result
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
