#include "main.h"
/**
 * swap_int - swaps the integers
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int swap_tmp;

	swap_tmp = *a;
	*a = *b;
	*b = swap_tmp;
}
