#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @argc: argument
 * @argv: argument
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int num = argc;

	if (num == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", num - 1);
	}
	return (0);
}
