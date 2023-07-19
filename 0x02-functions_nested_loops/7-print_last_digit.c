#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: value which the last digit is printed from
 *
 * Description: The function prints the last digit of a number
 *
 * Return: Returns the last value
 */
int print_last_digit(int n)
{
	int l;

	if (n >= 0)
	{
		l = n % 10;
	}
	else if (n < 0)
	{
		l = -(n % 10);
	}
	_putchar('0' + l);
	return (l);
}
