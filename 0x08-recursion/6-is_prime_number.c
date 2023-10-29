#include "main.h"
/**
 * div - returns 1 if num ia a prime num
 * @a: first num
 * @b: second no
 * Return: 1 if divisible , 0 otherwise
 */
int div(int a, int b)
{
	if (a % b == 0)
	{
		return (0);
	}
	if (b == a / 2)
	{
		return (1);
	}
	return (div(a, b + 1));
}
/**
 * is_prime_number - checks if no is a primr number
 * @n: number to be checked
 * Return: 0, 1 or div
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (div(n, 2));
}
