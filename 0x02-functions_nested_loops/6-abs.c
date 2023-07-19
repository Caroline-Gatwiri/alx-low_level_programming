#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 *
 * @n: integer from which the absolute value is computes
 *
 * Description: The function prints the absolute value of an integer
 *
 * Return: absolute value if executed successfully
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
