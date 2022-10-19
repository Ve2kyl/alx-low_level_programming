#include "main.h"

/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute;

	while (houg <= 23)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
