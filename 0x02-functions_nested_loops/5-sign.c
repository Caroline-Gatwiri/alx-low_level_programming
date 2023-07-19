#include "main.h"
/**
 * print_sign - prints sign of a number
 *
 * @n: number to be tested
 *
 * Description: The function prints the sign of a number(if greater then zero
 *		less than zero, or is zero).
 *
 * Return: 1 and prints + if n is > 0, o and prints 0 if n is zero -1,-, < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
