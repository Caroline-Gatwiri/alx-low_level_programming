#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function name
 *
 * @n: first number
 *
 * Description: Prints no's from n to 98 folllowed by a new line
 *
 * Return: Returns the numbers
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
while (n > 98)
{
	printf("%i, ", n);
	n--;
}

printf("98");
putchar('\n');
}
