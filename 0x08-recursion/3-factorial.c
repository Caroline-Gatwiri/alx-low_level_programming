#include "main.h"
/**
 * factorial - prints factorial of a number
 * @n: number whose factorial is to be printed
 * Return: -1, 0 or the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

