#include "main.h"
/**
 * sqr_rt - find square root of a number
 * @a: number
 * @j: number
 * Return: square root
 */
int sqr_rt(int a, int j)
{
	return (
			(j * j == a) ? j :
			(j == a / 2) ? -1 :
			sqr_rt(a, j + 1)
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
	return (sqr_rt(n, 1));

}

