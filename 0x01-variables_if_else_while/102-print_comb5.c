#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints a message to the standard output.'
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit1, digit2, digit3, digit4;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');
			putchar(' ');

			for (digit3 = 0; digit3 <= 9; digit3++)
			{
				for (digit4 = digit3 + 1; digit4 <= 9; digit4++)
				{
					putchar(digit1 + '0');
					putchar(digit4 + '0');

					if (digit2 < 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	/** Return 0 to indicate success */
	return (0);
}