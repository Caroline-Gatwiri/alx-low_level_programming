#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of the array
 * @c: what the array is created from
 * Return: pointer to an array , Null otherwise
 */
char *create_array(unsigned int size, char c)
{
	char  *array;
	unsigned int i;

	if (size == 0)
		return (0);
	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	array[size] = '\0';
	return (array);
}

