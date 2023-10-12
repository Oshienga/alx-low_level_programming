#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Entry point
 * Description: 'it is a program'
 * @format: arg
 * Return: result
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *separator;
	unsigned int i;

	va_start(args, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, (float)va_arg(args, double));
				break;
			case 's':
				{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", separator);
				} else
				{
					printf("%s%s", separator, str);
				}
				break;
			}
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
