#include "main.h"
/**
 * square_root - find square root of a number
 * @a: number
 * @b: number
 * Return: square root
 */
int square_root(int a, int b)
{
	return (
			(b * b == a) ? b :
			(b == a / 2) ? -1 :
			square_root(a, b + 1)
			);
}
/**
 * _sqrt_recursion - returns square root of a num
 * @n: number whose square root we are getting
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (square_root(n, 1));

}
