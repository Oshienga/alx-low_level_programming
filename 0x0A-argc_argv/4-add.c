#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @argc: argument
 * @argv: argument
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0 || argv[i][0] == '-')
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
