#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59.
 *
 * Description: This function prints every minute of the day starting
 * from 00:00 to 23:59. Each minute is printed in the format HH:MM, where
 * HH represents the hour and MM represents the minute. The function
 * uses nested loops to iterate through the hours and minutes and prints
 * each combination using the _putchar function. The function does not
 * return any value.
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int f;

	for (i = 0 ; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 2 && j >= 4)
			{
				break;
			}
			for (k = 0; k < 6; k++)
			{
				for (f = 0; f < 10; f++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(f + '0');
					_putchar('\n');
				}
			}
		}
	}
}
