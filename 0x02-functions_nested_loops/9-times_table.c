#include "main.h"
/**
 * times_table - the 9 times table
 *
 * Description: The function prints the nines timetable 10 times
 *
 * Return: void if executed successfully
 */
void times_table(void)
{
	int a, b, mult;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mult = a * b;
			if (b == 0)
			{
				_putchar('0' + mult);
			}
			else if (mult >= 10)
			{
				_putchar(' ');
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mult);
			}
			if (b != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
