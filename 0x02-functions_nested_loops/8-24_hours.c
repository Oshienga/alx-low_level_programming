#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 * Description: 'This program prints a message to the standard output.'
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
