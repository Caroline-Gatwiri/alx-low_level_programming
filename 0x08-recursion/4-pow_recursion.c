#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power of t
 * @x: value
 * @y: value with the power
 * Return: -1, 1, the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
