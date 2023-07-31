#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: value
 * @size: size
 *
 */
void print_diagsums(int *a, int size)
{
	int m, n;
	int sum_m = 0;
	int sum_n = 0;

	for (m = 0; m < size; m++)
	{
		sum_m += a[m];
		a += size;
	}
	a -= size;
	for (n = 0; n < size; n++)
	{
		sum_n += a[n];
		a -= size;
	}
	printf("%d, %d\n", sum_m, sum_n);
}
