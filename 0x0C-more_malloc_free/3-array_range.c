#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int b;

	if (min > max)
		return (NULL);

	b = max - min + 1;

	array = malloc(b * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < b; i++)
		array[i] = min++;

	return (array);
}

