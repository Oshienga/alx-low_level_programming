#include "function_pointers.h"

/**
 * print_name - Entry point
 * Description: 'it is a program'
 * @name: first argument
 * @f: second argument
 * Return: result
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
