#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Entry point
 * Description: 'it is a program'
 * @main_addr: first arg
 * @num_bytes: second arg
 *
 * Return: result
 */

void print_opcodes(char *main_addr, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", (unsigned char)main_addr[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - Entry point
 * Description: 'it is a program'
 * @argc: first arg
 * @argv: second arg
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num_bytes;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (char *)&main;

	print_opcodes(main_ptr, num_bytes);

	return (0);
}
