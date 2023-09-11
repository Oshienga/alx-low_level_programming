#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit1, digit2, digit3, digit4;

	for (int num1 = 0; num1 <= 99; num1++)
	{
		for (int num2 = num1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	/** Return 0 to indicate success */
	return (0);
}
