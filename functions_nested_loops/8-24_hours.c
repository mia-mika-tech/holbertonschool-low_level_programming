#include "main.h"

/**
 * jack_bauer - Shows every minute of Jack Bauer's day
 *
 * Description: This function scrolls through all hours
 *              and displays them in HH:MM format.
 * minutes (00 | 59) and displays them in HH:MM format.
 */

void jack_bauer(void)
{
	int hour, minute;

	if (hour = 0; hour < 24; hour++)
	{
		if (minute = 0; minute < 60; minute++)
		{
		    _putchar((hour / 10) + '0');
		    _putchar((hour % 10) + '0');

		    _putchar(':');

		    _putchar((minute / 10) + '0');
		    _putchar((minute % 10) + '0');

		    _putchar('\n');
		}
	}
}
