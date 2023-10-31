#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to the array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int b;
	int a;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arr[a] = (int *) malloc(width * sizeof(int));
		if (arr[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(arr[b]);
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}

