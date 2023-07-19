#include "main.h"
/**
 * jack_bauer - tota minutes in a day
 *
 * Description: Prints out every minute of the day from 0000hrs to 2359hrs
 *
 * Return: void if executed successfully
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
}
