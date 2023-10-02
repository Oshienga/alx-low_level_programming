#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * @argc: argument
 * @argv: argument
 * Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int sum = 0;
	int i, j, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		num = 0;
		j = 0;

		while (arg[j] != '\0')
		{
			if (arg[j] >= '0' && arg[j] <= '9')
			{
				num = num * 10 + (arg[j] - '0');
				j++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
