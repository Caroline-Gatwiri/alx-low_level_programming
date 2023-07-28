#include "main.h"
/**
 * reverse_array - reverses the content of an array of ints
 * @a: points arr of ints
 * @n: no of elements of the array
 */
void reverse_array(int *a, int n)
{
	int j, k, tmp;

	k = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		tmp = a[j];
		a[j] = a[k];
		a[k--] = tmp;
	}
}
